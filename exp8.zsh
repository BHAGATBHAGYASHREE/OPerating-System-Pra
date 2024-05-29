#!/bin/zsh

for file in *.log; do
    echo "=== $file ==="
    tail -n 20 "$file"
    echo
done

