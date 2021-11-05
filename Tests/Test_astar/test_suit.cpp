#include "gtest/gtest.h"
#include "../../astar/work.h"

TEST(TestWork, Test_1){
    constexpr int x = 5;
    constexpr int y = 6;

    bool *array = (bool*)malloc(sizeof(bool)*y*x);
    fill_random(array, y*x);

    Pair start  = {0, 1};
    Pair exit   = {4, 3};

    array[0]    = 1;    array[1]    = 1;    array[2]    = 1;    array[3]    = 1;    array[4]    = 1;    array[5]    = 0;
    array[6]    = 1;    array[7]    = 1;    array[8]    = 1;    array[9]    = 1;    array[10]   = 1;    array[11]   = 1;
    array[12]   = 1;    array[13]   = 0;    array[14]   = 0;    array[15]   = 1;    array[16]   = 1;    array[17]   = 0;
    array[18]   = 1;    array[19]   = 1;    array[20]   = 1;    array[21]   = 1;    array[22]   = 0;    array[23]   = 1;
    array[24]   = 0;    array[25]   = 0;    array[26]   = 1;    array[27]   = 1;    array[28]   = 0;    array[29]   = 1;

    EXPECT_EQ(find(array, x, y, start, exit), 6);

    free(array);
}
