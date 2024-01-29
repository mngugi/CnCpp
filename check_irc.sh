#!/bin/bash

irc_client="irssi"

# Check if the IRC client process is running
if pgrep -x "$irc_client" > /dev/null; then
    echo "Active IRC process ('$irc_client') found."
else
    echo "No active IRC process ('$irc_client') found."
fi

