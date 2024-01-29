#!/bin/bash

process_name="pipewire-pulse"

# Get the PID of the process
pid=$(pgrep -o "$process_name")

if [ -n "$pid" ]; then
    echo "Process '$process_name' found with PID: $pid"
    
    # Display detailed information about the process
    ps -p "$pid" -o pid,ppid,cmd,%cpu,%mem,stat
else
    echo "Process '$process_name' not found."
fi

