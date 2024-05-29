#!/bin/zsh

for file in *; do
    if [ -f "$file" ]; then
        size=$(stat -c "%s" "$file")
        echo "$file: $size bytes"
    fi
done

