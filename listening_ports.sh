#!/bin/bash

# Check for processes listening on ports
for port in $(lsof -i -P -n | awk '$1 == "LISTEN" {print $9}' | awk -F ':' '{print $NF}' | sort -u); do
    echo "Process is listening on port $port"
    lsof -i :$port
done

