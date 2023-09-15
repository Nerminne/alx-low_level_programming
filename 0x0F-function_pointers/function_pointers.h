#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/*
 * file function_pointers.h contain prototype of
 * all function that will used in this directory
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
