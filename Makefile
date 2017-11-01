CC=g++
CFLAGS=-std=c++11

BINARIES=bubble_sort binary_search_1 bitset deque generate_subsets map multiset pair_sort priority_queue queue range_iterators set set_iterators stack tuples vector_auto vector_initial_values vector_sort

all: $(BINARIES)

bubble_sort: bubble_sort.cpp
	$(CC) $(CFLAGS) bubble_sort.cpp -o bubble_sort

binary_search_1: binary_search_1.cpp
	$(CC) $(CFLAGS) binary_search_1.cpp -o binary_search_1

tuples: tuples.cpp
	$(CC) $(CFLAGS) tuples.cpp -o tuples

pair_sort: pair_sort.cpp
	$(CC) $(CFLAGS) pair_sort.cpp -o pair_sort

vector_sort: vector_sort.cpp
	$(CC) $(CFLAGS) vector_sort.cpp -o vector_sort

vector_auto: vector_auto.cpp
	$(CC) $(CFLAGS) vector_auto.cpp -o vector_auto

vector_initial_values: vector_initial_values.cpp
	$(CC) $(CFLAGS) vector_initial_values.cpp -o vector_initial_values

set: set.cpp
	$(CC) $(CFLAGS) set.cpp -o set

multiset: multiset.cpp
	$(CC) $(CFLAGS) multiset.cpp -o multiset

map: map.cpp
	$(CC) $(CFLAGS) map.cpp -o map

range_iterators: range_iterators.cpp
	$(CC) $(CFLAGS) range_iterators.cpp -o range_iterators

set_iterators: set_iterators.cpp
	$(CC) $(CFLAGS) set_iterators.cpp -o set_iterators

bitset: bitset.cpp
	$(CC) $(CFLAGS) bitset.cpp -o bitset

deque: deque.cpp
	$(CC) $(CFLAGS) deque.cpp -o deque

stack: stack.cpp
	$(CC) $(CFLAGS) stack.cpp -o stack

queue: queue.cpp
	$(CC) $(CFLAGS) queue.cpp -o queue

priority_queue: priority_queue.cpp
	$(CC) $(CFLAGS) priority_queue.cpp -o priority_queue

clean:
	rm -f $(BINARIES)
