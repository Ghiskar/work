#include <print.h>
#include <work.h>

int main(){
    int x;
    int y;

    set_size(x, y);

    bool *array = (bool*)malloc(sizeof(bool)*y*x);
    fill_random(array, y*x);
    print_array(array, x, y);

    Pair start;
    Pair exit;

    set_point(start, (char*)"start");
    set_point(exit, (char*)"end");

//    printf("start[%d][%d] = %d, exit[%d][%d] = %d\n", start.i, start.j, array[start.i*y + start.j], exit.i, exit.j, array[exit.i*y + exit.j]);

    print_result(find(array, x, y, start, exit));

    return 0;
}
