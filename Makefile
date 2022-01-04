CC=clang
CFLAGS=-Wall -O2 -ffast-math

all:

quick_sort_test:
	$(CC) $(CFLAGS) -o $@ quicksort.c quicksort_test.c

clean:
	-rm -f quicksort_test

