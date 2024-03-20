# Building image from scratch

## u-boot :

Download :


configuration for bootcmd:


setenv bootcmd "if mmc dev; then run Imagefat ; else run LOAD_TFTP; echo "LOADING DONE FROM TFTP!"; fi"

setenv Imagefat "if run LOAD_FAT ; then echo "LOADING DONE FROM FAT"; else run LOAD_TFTP; echo "LOADING DONE FROM TFTP"; fi"

setenv LOAD_FAT "fatload mmc 0:1 $kernel_addr_r zImage;fatload mmc 0:1 $fdt_addr_r vexpress-v2p-ca9.dtb"

setenv LOAD_TFTP "tftp $kernel_addr_r zImage; tftp $fdt_addr_r vexpress-v2p-ca9.dtb"

```
setenv serverip 10.204.25.178;setenv ipaddr 10.204.25.176;setenv LOAD_FAT \"fatload mmc 0:1 kernel_addr_r zImage;fatload mmc 0:1 kerneladdrrzImage;fatloadmmc0:1fdt_addr_r vexpress-v2p-ca9.dtb\";setenv LOAD_TFTP \"tftp kernel_addr_r zImage; tftp kerneladdrrzImage;tftpfdt_addr_r vexpress-v2p-ca9.dtb\";setenv Imagefat \"if run LOAD_FAT ; then echo \"LOADING DONE FROM FAT\"; else run LOAD_TFTP; echo \"LOADING DONE FROM TFTP\"; fi\";setenv bootcmd \"if mmc dev; then run Imagefat ; else run LOAD_TFTP; echo \"LOADING DONE FROM TFTP!\"; fi\";setenv bootargs \"console=ttyAMA0,115200n8 root=/dev/mmcblk0p2 rootfstype=ext4 rw rootwait init=/sbin/init\"
;setenv startk \"bootz kernel_addr_r - kerneladdrr−fdt_addr_r\";run bootcmd;
```

We can add at end:` run startk`

```
setenv startk bootz "kernel_addr_r - kerneladdrr−fdt_addr_r"
```
