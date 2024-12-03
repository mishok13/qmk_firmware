build:
    rm -rf .build
    uv tool run qmk lint -kb blank_tehnologii/manibus -km mishok13
    uv tool run qmk compile -kb blank_tehnologii/manibus -km mishok13

setup:
    uv tool install qmk
    uv tool run qmk setup -y
