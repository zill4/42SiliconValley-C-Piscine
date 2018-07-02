find . -type f -o -type d | wc | awk '{print $1}'
