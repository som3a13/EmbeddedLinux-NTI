#!/usr/bin/bash

FILE_RC="$HOME/.bashrc"
LOCAL="whoami"

if [[ -e $FILE_RC ]]; then
    #using single quotation to not replace HOSTNAME while appending in .bashrc
    echo 'export HELLO=$HOSTNAME' >> $FILE_RC
    
    gnome-terminal &
else
    echo ".bashrc file does not exist in the user's home directory."
fi