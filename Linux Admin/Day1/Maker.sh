#!/usr/bin/bash

FIRST_DIR="myDirectory"
SECOND_DIR="secondDirectory"

NOTE_PAPER="myNotePaper"
OLD_NOTE="myOldNotePaper"



mkdir -p ~/"$FIRST_DIR"/
mkdir -p ~/"$FIRST_DIR/$SECOND_DIR"

touch ~/"$FIRST_DIR/$SECOND_DIR/$NOTE_PAPER"

cp ~/"$FIRST_DIR/$SECOND_DIR/$NOTE_PAPER" ~/"$FIRST_DIR"

mv ~/"$FIRST_DIR/$NOTE_PAPER" ~/"$FIRST_DIR/$OLD_NOTE"
