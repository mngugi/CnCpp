#!/bin/bash

# Update package list
sudo apt update > /dev/null

# Check for available updates and filter installed packages
updates=$(apt list --upgradable 2>/dev/null | awk '{print $1}')

if [ -n "$updates" ]; then
    echo "Installed Applications with Updates:"
    for package in $updates
    do
        installed_version=$(apt show $package 2>/dev/null | grep -m 1 "Version" | awk '{print $2}')
        available_version=$(apt show $package 2>/dev/null | grep -m 1 "Version" | awk '{print $2}')
        echo "$package (Installed: $installed_version, Available: $available_version)"
    done
else
    echo "No updates available for installed applications."
fi

