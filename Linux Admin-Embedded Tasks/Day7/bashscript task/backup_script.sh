#!/usr/bin/bash

PATH1="$1"
PATH2="$2"

DIRNAME1=$(basename "$PATH1")
DIRNAME2=$(basename "$PATH2")

BACKUP="./backup"
DATE=$(date +%Y-%m-%d)

if [ -e $BACKUP ]
    then
    echo "Backup folder found"
else
     mkdir -p backup
    echo "Backup folder is created"
fi

if [ $# -lt 1 ]; then
    echo "Usage: $0 <path1> <path2>"
    exit 1
fi


if [ -e $PATH1 ]; then

            tar -cf backup_"$DIRNAME1"_$DATE.tar "$PATH1" 
            gzip backup_"$DIRNAME1"_$DATE.tar 
            mv backup_"$DIRNAME1"_$DATE.tar.gz "$BACKUP"
            echo "Backup is done for $DIRNAME1"

else
            echo "Directory is not found"
fi


if [ -e "$2" ]; then
    if [[ -e  "$PATH2" ]]; then

            tar -cf backup_"$DIRNAME2"_$DATE.tar "$PATH2" 
            gzip backup_"$DIRNAME2"_$DATE.tar 
            mv backup_"$DIRNAME2"_$DATE.tar.gz  "$BACKUP"
            echo "Backup is done for $DIRNAME2"

    else
                echo "Directory is not found"
    fi
fi