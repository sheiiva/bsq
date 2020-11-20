#!/bin/bash

rm -rf tmp
mkdir tmp

PATH_MAP="tests/deps/maps"
PATH_MAP_SOLVED="tests/deps/maps_solved"

check () {
./bsq $PATH_MAP/$1 > tmp/$1
res=$(diff $PATH_MAP_SOLVED/$1 tmp/$1)
expexted=$(echo "Files $PATH_MAP_SOLVED/$1 and tmp/$1 are identical\n")
if [[ "$res" == "$expexted" ]]
then
echo "OK: $1"
else
echo -e "ERROR: $1"
fi
}

check "intermediate_map_34_137_empty"
check "intermediate_map_10000_10000"
check "intermediate_map_200_200"
check "intermediate_map_97_21_empty"
check "intermediate_map_one_empty_box"
check "intermediate_map_1000_1000"
check "intermediate_map_34_137_empty"
check "intermediate_map_97_21_filled"
check "intermediate_map_one_empty_column"
check "intermediate_map_1000_1000_2"
check "intermediate_map_34_137_filled"
check "intermediate_map_97_21_with_obstacles_25pc"
check "intermediate_map_one_empty_line"
check "intermediate_map_100_100"
check "intermediate_map_34_137_with_obstacles_25pc"
check "intermediate_map_97_21_with_obstacles_50pc"
check "intermediate_map_one_filled_box"
check "intermediate_map_187_187_empty"
check "intermediate_map_34_137_with_obstacles_50pc"
check "intermediate_map_97_21_with_obstacles_75pc"
check "intermediate_map_one_filled_column"
check "intermediate_map_187_187_filled"
check "intermediate_map_34_137_with_obstacles_75pc"
check "intermediate_map_empty_corners"
check "intermediate_map_one_filled_line"
check "intermediate_map_187_187_with_obstacles_25pc"
check "intermediate_map_5000_5000"
check "intermediate_map_filled_corners"
check "intermediate_map_one_line_with_obstacles_25pc"
check "intermediate_map_187_187_with_obstacles_50pc"
check "intermediate_map_500_500"
check "intermediate_map_one_column_with_obstacles_25pc"
check "intermediate_map_one_line_with_obstacles_50pc"
check "intermediate_map_187_187_with_obstacles_75pc"
check "intermediate_map_500_500_2"
check "intermediate_map_one_column_with_obstacles_50pc"
check "intermediate_map_one_line_with_obstacles_75pc"
check "intermediate_map_2000_2000"
check "intermediate_map_500_500_3"
check "intermediate_map_one_column_with_obstacles_75pc"

rm -rf tmp
