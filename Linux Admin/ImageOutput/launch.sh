qemu-system-arm -M vexpress-a9 \
-m 128M \
-nographic \
-kernel SD/boot/u-boot \
-sd sd.img \
 -net nic\
 -net tap,script=qemu-ifup.sh
 
 #console=ttyAMA0,115200n8 root=/dev/mmcblk0p2 rootfstype=ext4 rw rootwait
#setenv bootargs console=ttyAMA0 root=/dev/nfs ip=10.204.25.177:::::eth0 nfsroot=10.204.25.178:/home/som3a133/Desktop/EmbeddedLinux/Qemu/BuildR/NFS,nfsvers=3,tcp rw init=/sbin/init

