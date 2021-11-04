#include "gtest/gtest.h"
#include "../../Test_4_2/work.h"

TEST(TestWork, TestUniqueElements){
    size_t A[5] = {4, 54, 63, 11, 11};
    size_t B[4] = {85, 44, 54, 11};

    size_t **array = (size_t**)malloc(sizeof(size_t)*6);

    EXPECT_EQ(unique_elements(array, A, 5, B, 4), 2);
    EXPECT_EQ(*array[0], A[0]);
    EXPECT_EQ(array[0], &A[0]);
    EXPECT_EQ(*array[1], A[2]);
    EXPECT_EQ(array[1], &A[2]);

    free(array);
}
