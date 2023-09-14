#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * file function_pointers.h contain prototype of
 * all function that will used in this directory
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif