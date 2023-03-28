#ifndef ALLOCSPROJECT_ALLOC_H
#define ALLOCSPROJECT_ALLOC_H

#include <unistd.h>

int *AVAIL, *free_block[10], *end_mem;

void print_AVAIL();
void *my_malloc(size_t size);
void my_free(void *first_byte);

#endif //ALLOCSPROJECT_ALLOC_H
