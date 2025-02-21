#!/bin/bash

# Check if the correct number of arguments is passed
if [ "$#" -ne 3 ] && [ "$#" -ne 4 ]; then
    echo "Usage: $0 <compile|decompile> <primary|secondary> <tileset-name>"
    exit 1
fi

# Store the arguments
action=$1
category=$2
tileset=$3
if [ "$#" == 4 ]; then
    primary_tileset=$4
else
    primary_tileset="general_caldera"
fi

echo "using primary $primary_tileset"

# Check if the first argument is either "compile" or "decompile"
if [ "$category" != "primary" ] && [ "$category" != "secondary" ]; then
    echo "Error: Second argument must be 'primary' or 'secondary'."
    exit 1
fi

# Check if the second argument is either "primary" or "secondary"
if [ "$action" != "compile" ] && [ "$action" != "decompile" ]; then
    echo "Error: First argument must be 'compile' or 'decompile'."
    exit 1
fi

# Run the appropriate command based on the action
if [ "$category" == "primary" ]; then
    if [ "$action" == "decompile" ]; then
        porytiles decompile-primary -Wall -o ./porytiles/primary/$tileset/ ./data/tilesets/primary/$tileset/ ./include/constants/metatile_behaviors.h
    elif [ "$action" == "compile" ]; then
        porytiles compile-primary -Wall -Wno-color-precision-loss -o ./data/tilesets/primary/$tileset/ ./porytiles/primary/$tileset/ ./include/constants/metatile_behaviors.h
    fi
elif [ "$category" == "secondary" ]; then
    if [ "$action" == "decompile" ]; then
        porytiles decompile-secondary -Wall -o ./porytiles/secondary/$tileset/ ./data/tilesets/secondary/$tileset/ ./data/tilesets/primary/$primary_tileset/ ./include/constants/metatile_behaviors.h
    elif [ "$action" == "compile" ]; then
        porytiles compile-secondary -Wall -Wno-color-precision-loss -o ./data/tilesets/secondary/$tileset/ ./porytiles/secondary/$tileset/ ./porytiles/primary/$primary_tileset/ ./include/constants/metatile_behaviors.h
    fi
fi