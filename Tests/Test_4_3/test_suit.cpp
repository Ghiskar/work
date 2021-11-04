#include "gtest/gtest.h"
#include "../../Test_4_3/work.h"

TEST(TestWork, Test){
    constexpr size_t    size = 3;
    size_t              k = 1;

    int M[3][3] = {};
    fill_array(*M, size, k);

    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            printf("M[%llu][%llu] = %d  ", i, j, M[i][j]);

            if (i == k){
                EXPECT_EQ(M[i][j], k+1);
            } else if (j == k){
                EXPECT_EQ(M[i][j], k+2);
            }
        }
        printf("\n");
    }
    printf("\n");

    swap_row_column(*M, size, k);

    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            printf("M[%llu][%llu] = %d  ", i, j, M[i][j]);

            if (j == k){
                EXPECT_EQ(M[i][j], k+1);
            } else if (i == k){
                EXPECT_EQ(M[i][j], k+2);
            }
        }
        printf("\n");
    }
}
