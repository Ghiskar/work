#ifndef WORK_H
#define WORK_H

#include <stdlib.h>
#include <time.h>
#include "struct.h"

void    set(bool &flag, const bool array, int &tmp, const int count);
void    fill_array(int * const array, int size);
void    fill_random(bool * const array, int size);
void    check(int index, int x, int y, bool &flag,
                const bool * const array, int * const tmp, const int count);
int     find(bool* mass, int x, int y, Pair start, Pair exit );


#endif // WORK_H
