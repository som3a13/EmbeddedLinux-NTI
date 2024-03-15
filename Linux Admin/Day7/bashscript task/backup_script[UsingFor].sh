#!/usr/bin/bash

# Backup directory
BACKUP="./backup"
DATE=$(date +%Y-%m-%d)

# Check if backup directory exists, create if not
if [ -e "$BACKUP" ]; then
    echo "Backup folder found"
else
    mkdir -p "$BACKUP"
    echo "Backup folder is created"
fi

# Check if at least one argument is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <path1> [<path2> ...]"
    exit 1
fi

# Loop over each provided directory path
for path in "$@"; do
    if [ -e "$path" ]; then
        dirname=$(basename "$path")
        tar -cf "backup_${dirname}_${DATE}.tar" "$path"
        gzip "backup_${dirname}_${DATE}.tar"
        mv "backup_${dirname}_${DATE}.tar.gz" "$BACKUP"
        echo "Backup is done for $dirname"
    else
        echo "Directory '$path' is not found"
    fi
done
