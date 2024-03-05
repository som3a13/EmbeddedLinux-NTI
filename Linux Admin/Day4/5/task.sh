#!/usr/bin/bash

groupname="ismail"
username="mohamed"

#Create a user
sudo adduser $username
#Create a group
sudo addgroup $groupname
#Adds user to a group
sudo usermod -aG "$groupname" "$username"

echo "Information for user $username:"
id "$username"

echo "Information for group $groupname:"
getent group "$groupname"