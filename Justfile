build:
    rm -rf .build
    uv tool run qmk compile -kb blank_tehnologii/manibus -km mishok13
    mv .build/blank_tehnologii_manibus_mishok13.hex /mnt/c/Users/mishok13/Downloads/

setup:
    uv tool install qmk
    uv tool run qmk setup -y
