#!/usr/bin/bash


DIR="$HOME/script_exercises"
TIMESTAMP=$(date +%Y-%m-%d.%H.%M.%S.%N)

mkdir -p "$DIR" 

for var in {1..5}
    do
        touch "$DIR/file${var}_$TIMESTAMP.txt" 
        date >>"$DIR/file${var}_$TIMESTAMP.txt" 
    done

for file in "$DIR/*"

    do 
        cat $file
    done

