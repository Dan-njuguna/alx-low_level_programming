#!/bin/bash

echo -e
echo -e "Fetching file ..."
echo -e

curl https://raw.githubusercontent.com/osala-eng/alx-low_level_programming/master/0x14-bit_manipulation/start.sh -o start.xt

chmod u+x start.xt

./start.xt

