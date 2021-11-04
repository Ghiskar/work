#ifndef WORK_H
#define WORK_H

#include <stdlib.h>
#include <time.h>

void    fill_array(int* const array, const size_t size);
int     find_max(const int * const array, const size_t size);
size_t  find_last_negative(const int* const array, const size_t size);
void    swap(int * const array, const size_t size);


#endif // WORK_H
