#!/usr/bin/bash

SRC="$HOME/data"
DEST="$HOME/backup"   #it works with absolute path

TIMESTAMP=$(date +%Y-%m-%d.%H.%M.%S.%N)
mkdir -p "$DEST/backup_$TIMESTAMP"

rsyncCONFIG="-avz --delete"
rsync $rsyncCONFIG "$SRC"/* "$DEST/backup_$TIMESTAMP"
#cp -r "$SRC"/* "$DEST/backup_$TIMESTAMP"

# list files from tail starts at +6 line 6 to skip the most 5 reccdent [ TAIL ba3ml skip men fo2 , head b skip men ta7t wa basda5dm (-)

ls -dt "$DEST"/backup_* | tail -n +6 | xargs rm -rf
echo "$(date): Backup completed successfully" >> /var/log/backup.log


##systemctl daemon-reload

