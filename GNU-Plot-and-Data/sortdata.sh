#!/bin/bash
gcc project.c sorting.c
for i in {1..10000..100}
do
  echo "$i" | ./a.out >> bubblesort.txt
  echo >> bubblesort.txt
  
done
