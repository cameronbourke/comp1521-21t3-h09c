#/bin/bash

# If you find this interesting! Highly recommended COMP2041
# https://www.handbook.unsw.edu.au/undergraduate/courses/2022/COMP2041

for i in $(1521 mipsy --hex prog.s); do
	printf "%32s\n" $(bc <<< "ibase=16;obase=2;${i^^}") | sed 's/ /0/g'
done
