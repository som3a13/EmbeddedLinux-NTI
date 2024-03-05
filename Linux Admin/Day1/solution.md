1- Ubuntu , fedora , Debian 

2- man stands for manuel , shows how to use the commands

3- rm - remove files or directories
rmdir - remove empty directories

4- a)rmdir: failed to remove 'dir11': Directory not empty
    rm -r dir11  will remove the Directory & the file recursivley
b)rmdir: failed to remove 'OldFiles': Not a directory
rmdir: failed to remove 'Documents': Directory not empty

c) absolute [complete path] : /home/som3a133/docs/mycv
    relative [short path] : ~/docs/mycv

5- cp /etc/passwd ~/Desktop/EmbeddedLinux/NTI/Day1
6- mv passwd oldpasswd
7- 1)cd ../../home/som3a133
2)cd ~
3)cd /home/som3a133
4)cd $HOME

8-ls /usr/bin/ | grep ^[w].*
 ls /usr/bin/w*

9- type : troubleshooting and understanding how commands are interpreted by the shell.
10- 1) som3a133@linux:~$ type chmod
    chmod is /usr/bin/chmod
    2)som3a133@linux:~$ type chown
    chown is /usr/bin/chown

11- man read
12- man apropos  
     apropos : search the manual page names and descriptions
