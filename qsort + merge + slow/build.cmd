@CHCP 1251>NUL
gcc -Wall -E main.c -o main.i
gcc -Wall -E compare.c -o compare.i
gcc -Wall -E slow_sort.c -o slow_sort.i
gcc -Wall -E mass_read.c -o mass_read.i
gcc -Wall -E mass_generation.c -o mass_generation.i
gcc -Wall -E test_sort.c -o test_sort.i
gcc -Wall -S main.i -o main.s
gcc -Wall -S compare.i -o compare.s
gcc -Wall -S slow_sort.i -o slow_sort.s
gcc -Wall -S mass_read.i -o mass_read.s
gcc -Wall -S mass_generation.i -o mass_generation.s
gcc -Wall -S test_sort.i -o test_sort.s
gcc -Wall -g3 -c main.c
gcc -Wall -g3 -c compare.c
gcc -Wall -g3 -c slow_sort.c
gcc -Wall -g3 -c mass_read.c
gcc -Wall -g3 -c mass_generation.c
gcc -Wall -g3 -c test_sort.c
gcc -Wall main.o test_sort.o mass_generation.o mass_read.o slow_sort.o compare.o -o myprog19