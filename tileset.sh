#!/bin/bash

# Check if the correct number of arguments is passed
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <compile|decompile> <tileset-name>"
    exit 1
fi

# Store the arguments
action=$1
tileset=$2

# Check if the first argument is either "compile" or "decompile"
if [ "$action" != "compile" ] && [ "$action" != "decompile" ]; then
    echo "Error: First argument must be 'compile' or 'decompile'."
    exit 1
fi

# Run the appropriate command based on the action
if [ "$action" == "decompile" ]; then
    porytiles decompile-secondary -Wall -o ./porytiles/secondary/$tileset/ ./data/tilesets/secondary/$tileset/ ./data/tilesets/primary/general_porytiles/ ./include/constants/metatile_behaviors.h
elif [ "$action" == "compile" ]; then
    porytiles compile-secondary -Wall -Wno-color-precision-loss -o ./data/tilesets/secondary/$tileset/ ./porytiles/secondary/$tileset/ ./porytiles/primary/general_porytiles/ ./include/constants/metatile_behaviors.h
fi