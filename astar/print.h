#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include "struct.h"

void print_array(const bool * const array, const int x, const int y);
void print_result(const int count);
void set_point(Pair &point, char* s);
void set_size(int &x, int &y);


#endif // PRINT_H
