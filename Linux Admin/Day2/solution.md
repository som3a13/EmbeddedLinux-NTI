1-  vim binary_search.c
2- gcc binary_search.c -o binarySearch

```
  som3a133@linux:/Desktop/EmbeddedLinux/NTI/Day2$ ls -l
    total 24
    -rwxrwxr-x 1 som3a133 som3a133 16104 Mar  4 23:14 binarySearch
    -rw-rw-r-- 1 som3a133 som3a133   785 Mar  4 23:04 binary_search.c
    -rw-rw-r-- 1 som3a133 som3a133    62 Mar  4 23:15 solution.txt
    som3a133@linux:/Desktop/EmbeddedLinux/NTI/Day2$ sudo mv binarySearch /usr/local/bin
    [sudo] password for som3a133:
    som3a133@linux:~/Desktop/EmbeddedLinux/NTI/Day2$ cd /usr/local/bin
    som3a133@linux:/usr/local/bin$ ls binarySearch
    binarySearch
    som3a133@linux:/usr/local/bin$ binarySearch
    Element is present at index 4
```

Reason :The system searches for the executable file in directories specified in the PATH variable, in the order they are listed. If the directory containing the binary file (/usr/local/bin) is included in the PATH variable, you can execute the binary from any location.
check : echo $PATH

Na2na2a :

# 1:

```
    cd /etc
    som3a133@linux:/etc$ ls | grep shell
    shells
    som3a133@linux:/etc$ cat shells
    # /etc/shells: valid login shells
    /bin/sh
    /bin/bash
    /usr/bin/bash
    /bin/rbash
    /usr/bin/rbash
    /usr/bin/sh
    /bin/dash
    /usr/bin/dash
```

2- env  / printenv
3- som3a133@linux:~$ env | grep SHELL
SHELL=/bin/bash
GNOME_SHELL_SESSION_MODE=ubuntu

4- \ just like new line

# 5

    vim ~/.bash_aliases
    alias PrintPath='echo $PATH'

    som3a133@linux:~/Desktop/EmbeddedLinux/NTI/Day2$ PrintPath
    /home/som3a133/.local/bin:/home/som3a133/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin
