#include "gtest/gtest.h"
#include "../../Test_4_4/work.h"

TEST(TestWork, TestSum){
    constexpr size_t size   = 3;
    int *M                  = (int*)malloc(sizeof(int)*size*size);

    for (size_t i = 0; i < size*size; ++i){
        M[i] = i + 1;
    }
    EXPECT_EQ(sum(M, 3), 7);
}

TEST(TestWork, TestSum_1){
    constexpr size_t size   = 2;
    int *M                  = (int*)malloc(sizeof(int)*size*size);

    for (size_t i = 0; i < size*size; ++i){
        M[i] = i + 1;
    }
    EXPECT_EQ(sum(M, 2), 1);
}
