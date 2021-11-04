#include "gtest/gtest.h"
#include "../../Test_4_1/work.h"

TEST(TestWork, TestMax){
    int M[4] = {11, -83, 17, 16};

    EXPECT_EQ(find_max(M, 4), 2);
}

TEST(TestWork, TestNegative){
    int M[4] = {-19, 22, 67, 34};

    EXPECT_EQ(find_last_negative(M, 4), 0);
}

TEST(TestWork, TestSwap){
    int M[4] = {0, -99, -17, 16};
    int R[4] = {0, -99, 16, -17};

    swap(M, 4);

    EXPECT_EQ(*M, *R);
}
