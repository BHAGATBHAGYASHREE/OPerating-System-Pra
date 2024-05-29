#!/bin/zsh

backup_dir="backup_$(date +"%Y%m%d_%H%M%S")"
mkdir "$backup_dir"
cp -r * "$backup_dir"
echo "Backup created in directory: $backup_dir"

