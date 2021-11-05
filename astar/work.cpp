#include "work.h"

void set(bool &flag, const bool array, int &tmp, const int count){
    if (!tmp && array){
        tmp     = count;
        flag    = true;
    }
}

void fill_array(int * const array, int size){
    for (int i = 0; i < size; ++i){
        array[i] = 0;
    }
}

void fill_random(bool * const array, int size){
    srand(time(nullptr));

    for (int i = 0; i < size; ++i){
        array[i] = rand() % 2;
    }
}

void check(int index, int x, int y, bool &flag,
           const bool * const array, int * const tmp, const int count)
{
    if (index % y)      { set(flag, array[index-1], tmp[index-1], count); }
    if ((index+1) % y)  { set(flag, array[index+1], tmp[index+1], count); }
    if (index >= y)     { set(flag, array[index-y], tmp[index-y], count); }
    if (index < (x-1)*y){ set(flag, array[index+y], tmp[index+y], count); }
}

int find(bool* mass, int x, int y, Pair start, Pair exit ){
    if (!mass[start.i*y + start.j] || !mass[exit.i*y + exit.j]){
        return -1;
    } else if (start.i == exit.i && start.j == exit.j){
        return 0;
    } else {
        int size = x*y;
        int *tmp = (int*)malloc(sizeof(int)*size);

        fill_array(tmp, size);

        int sIndex  = start.i*y + start.j;
        int eIndex  = exit.i*y + exit.j;
        int count   = 1;
        bool flag   = true;
        tmp[sIndex] = 1;

        while (flag){
            flag = false;
            ++count;

            for (int i = 0; i < size; ++i){
                if (tmp[i] == (count-1)){
                    check(i, x, y, flag, mass, tmp, count);

                    if (tmp[eIndex]){ flag = false; break; }
                }
            }
        }
        return (tmp[eIndex] ? (count-1) : -1);
    }
}
