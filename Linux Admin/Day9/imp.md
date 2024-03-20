# Building image from scratch

## u-boot :

Download , choose board config ```make board_defconfig``` 
Export your CROSS_COMPILE chain 
export CROSS_COMPILE=~/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-
export ARCH=arm
and Then go do your configs using ```make menuconfig```
configure system environment to load from FAT system, 0:1 deivce & partition 

configuration for bootcmd:

```
setenv bootcmd "if mmc dev; then run Imagefat ; else run LOAD_TFTP; echo "LOADING DONE FROM TFTP!"; fi"

setenv Imagefat "if run LOAD_FAT ; then echo "LOADING DONE FROM FAT"; else run LOAD_TFTP; echo "LOADING DONE FROM TFTP"; fi"

setenv LOAD_FAT "fatload mmc 0:1 $kernel_addr_r zImage;fatload mmc 0:1 $fdt_addr_r vexpress-v2p-ca9.dtb"

setenv LOAD_TFTP "tftp $kernel_addr_r zImage; tftp $fdt_addr_r vexpress-v2p-ca9.dtb"
```
bootcmd at menuconfig
```shell
setenv serverip 10.204.25.178;setenv ipaddr 10.204.25.176;setenv LOAD_FAT \"fatload mmc 0:1 $kernel_addr_r zImage;fatload mmc 0:1 $fdt_addr_r vexpress-v2p-ca9.dtb\";setenv LOAD_TFTP \"tftp $kernel_addr_r zImage; tftp $fdt_addr_r vexpress-v2p-ca9.dtb\";setenv Imagefat \"if run LOAD_FAT ; then echo \"LOADING DONE FROM FAT\"; else run LOAD_TFTP; echo \"LOADING DONE FROM TFTP\"; fi\";setenv bootcmd \"if mmc dev; then run Imagefat ; else run LOAD_TFTP; echo \"LOADING DONE FROM TFTP!\"; fi\";setenv bootargs \"console=ttyAMA0,115200n8 root=/dev/mmcblk0p2 rootfstype=ext4 rw rootwait init=/sbin/init\";setenv startk \"bootz $kernel_addr_r - $fdt_addr_r\";run bootcmd;
```
We can add at end:` run startk` to start kernel after uboot automaticaly

# Now Get linux kernel image , Device tree binary :
  Download linux kernel repo & make menuconfig then build to get the ```zImage and .dtb```
# Loading kernel & dtb :
  We implemented two ways of loading images & dtb in uboot 
    1. Load from FAT partition from SDCard
    2. Load from TFTP
# Virtual SDcard:
  1. create SDisk raw image:
      ```dd -f=/dev/zero of=sd.img bS=1M count=1024```
  2. ```cfdisk sd.img``` Make 2 partitions 1st one (FAT , PRIMARY , BOOT) 2nd one (EXT4, EXTENDED)
  3. Attach sd.img to be an actual device block
      ```losetup -f --show --partscan -v sd.img```
      Now check for lslbk sd.img attached at /dev/loop27 p1 p2  [Act as device]

```     
       loop27
│      7:27   0     1G  0 loop 
├─loop27p1
│    259:10   0   200M  0 part /home/som3a133/Desktop/EmbeddedLinux/Qemu/BuildR/SD/boot
└─loop27p2
     259:11   0   823M  0 part /home/som3a133/Desktop/EmbeddedLinux/Qemu/BuildR/SD/rootfs
```
 
  5. Create a file structure for these partitions
      ```
      sudo mkfs.vfat -F 16 -n boot /dev/loop27p1
      sudo mount /dev/loop27p1 /mnt/SD/boot
      sudo mkfs.ext4 -L rootfs /dev/loop27p2
      sudo mount /dev/loop27p2 /mnt/SD/rootfs
      ```
      Now you will find that SDcard is mounted at /mnt/SD partitions are mounted to both boot & rootfs directories
 
  6. Put ```u-boot , zImage , board.dtb``` files in the boot partition , they will be loaded from FAT from bootcmd as
     we configured that or we can load them from tftp.
     
  # TFTP Setup
  
  first we adjust our serverip , ipaddr in uboot [Server ip = host ip , ipaddr = target address]
  ## for Qemu: we can adjust virtual eth connection between host and target
  on host : 
  ```
  ifconfig tap0 10.204.25.178
  ifconfig tap0 up
  ```
  We can put that in script and give that as an option for Qemu [-net nic -net tap,ifname=tap0,script=ip.sh], Now        serverip = 10.204.25.178 , ipaddr = 10.204.25.176 
  Download tftp protocol
  ```sudo apt-get install tftpd-hpa```
  ```vim /etc/default/tftpd-hpa``` edit ```tftf_option = “--secure –-create”```
  ```
  systemctl restart tftpd-hpa
  cd /srv
  chown tftp:tftp tftp
  cp zImage board.dtp /srv/tftp
  ```
  TFTP is up working if any problem check for ip in ifconfig tap0 which is virtaul interface for host and try ping
# Start u-boot and Test on Qemu 
```
qemu-system-arm -M vexpress-a9 \
-m 128M \
-nographic \
-kernel SD/boot/u-boot \
-sd sd.img \
 -net nic\
 -net tap,script=no
```
after running kernel it searchs now for mounting point for rootfs.
## Creating ROOTFS:
  1. you can build one from scratch using busybox or buildroot
  2. Loading rootfs using SDcard or Network file system
     
## Mount Rootfs from SD  :
  Append this arg at bootcmd or in booting shell:
  ```
  setenv bootargs console=ttyAMA0,115200n8 root=/dev/mmcblk0p2 rootfstype=ext4 rw rootwait
  ```
  
     

## Mount Rootfs from NFS 
 ```
sudo apt install nfs-kernel-server
```
1- ```sudo vim /etc/exports``` write in it ```PATHto/rootfs 10.204.25.176(rw,no_root_squash,no_subtree_check)```
2- sudo exportfs -r / showmount -e / sudo systemctl restart nfs-kernel-server.
3- Loading from NFS :
change uboot bootcmd or add env at booting or just add an extra if conditions for searching.
```
setenv bootargs console=ttyAMA0 root=/dev/nfs ip=10.204.25.176:::::eth0 nfsroot=10.204.25.178:/home/PATH/rootfs,nfsvers=3,tcp rw
```



  

      



