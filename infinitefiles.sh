#!/bin/bash

echo "what is your name?"

read it

echo "how are you?"

read itt

mkdir $it

cd $it

echo "What is your file name?"

read files

for x in 1 2 3 4 5 
do
touch $files$x.cpp

done
