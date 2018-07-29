#!/bin/sh

#.sh�ȊO�̎��s�t�@�C�����𒊏o
rm -f "outputdata.csv"
cd ..
make all
cd bin
./trignometric_data_lib
export DISPLAY=localhost:0.0
gnuplot -e "
  plot 'outputdata.csv' with line;
  pause -1
"
