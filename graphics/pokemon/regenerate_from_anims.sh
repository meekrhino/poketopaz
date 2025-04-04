#!/bin/bash

process_p() {
    local p="$1"
    echo "Processing with parameter: $p"
    
    sudo chmod +777 "$p/front.png"
    sudo chmod +777 "$p/front.4bpp"
    sudo chmod +777 "$p/front-frame-2.png"
    sudo chmod +777 "$p/front-frame-2.4bpp"
    sudo chmod +777 "$p/front-shiny.png"
    sudo chmod +777 "$p/front-shiny-frame-2.png"
    sudo chmod +777 "$p/anim_front.4bpp"
    sudo chmod +777 "$p/anim_front.png"
    sudo chmod +777 "$p/anim_front.gif"
    sudo chmod +777 "$p/anim_front_shiny.png"
    sudo chmod +777 "$p/anim_front_shiny.gif"
    sudo chmod +777 "$p/back.4bpp"
    
    sudo rm "$p/front.png"
    sudo rm "$p/front.4bpp"
    sudo rm "$p/front-frame-2.png"
    sudo rm "$p/front-frame-2.4bpp"
    sudo rm "$p/front-shiny.png"
    sudo rm "$p/front-shiny-frame-2.png"
    sudo rm "$p/anim_front.4bpp"
    sudo rm "$p/anim_front_shiny.png"
    sudo rm "$p/anim_front_shiny.4bpp"
    sudo rm "$p/back.4bpp"
    
    sudo ../../tools/gbagfx/gbagfx "$p/anim_front.png" "$p/anim_front.4bpp"
    sudo ../../tools/gbagfx/gbagfx "$p/back.png" "$p/back.4bpp"
    
    file_size=$(($(stat -c %s "$p/anim_front.4bpp") / 2))
    sudo dd if="$p/anim_front.4bpp" bs="$file_size" count=1 > "$p/front.4bpp"
    sudo dd if="$p/anim_front.4bpp" bs="$file_size" skip=1 > "$p/front-frame-2.4bpp"
    
    sudo ../../tools/gbagfx/gbagfx "$p/anim_front.4bpp" "$p/anim_front_shiny.png" -palette "$p/shiny.pal" -object -width 8
    sudo ../../tools/gbagfx/gbagfx "$p/front.4bpp" "$p/front.png" -palette "$p/normal.pal" -object -width 8
    sudo ../../tools/gbagfx/gbagfx "$p/front-frame-2.4bpp" "$p/front-frame-2.png" -palette "$p/normal.pal" -object -width 8
    sudo ../../tools/gbagfx/gbagfx "$p/front.4bpp" "$p/front-shiny.png" -palette "$p/shiny.pal" -object -width 8
    sudo ../../tools/gbagfx/gbagfx "$p/front-frame-2.4bpp" "$p/front-shiny-frame-2.png" -palette "$p/shiny.pal" -object -width 8
    sudo ../../tools/gbagfx/gbagfx "$p/back.4bpp" "$p/back-shiny.png" -palette "$p/shiny.pal" -object -width 8
    
    convert -dispose Background -delay 100 -loop 0 "$p/front.png" "$p/front-frame-2.png" "$p/anim_front.gif"
    convert -dispose Background -delay 100 -loop 0 "$p/front-shiny.png" "$p/front-shiny-frame-2.png" "$p/anim_front_shiny.gif"
}

if [ -n "$1" ]; then
    p="$1"
    process_p "$p"
else
    while read -r p; do
        process_p "$p"
    done < pokemonlist.txt
fi
