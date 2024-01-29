#!/bin/bash

# Define the range of ports
start_port=6666
end_port=6667

# Check for processes listening on the specified ports
for port in $(seq $start_port $end_port); do
    if lsof -i :$port > /dev/null 2>&1; then
        echo "Process is listening on port $port"
        lsof -i :$port
    else
        echo "No process found on port $port"
    fi
done

