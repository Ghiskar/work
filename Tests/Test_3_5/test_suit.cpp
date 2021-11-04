#include "gtest/gtest.h"
#include "../../Test_3_5/work.h"

TEST(TestWork, TestSum){
    EXPECT_EQ(sum(0.051, 0.00001), 0.051022108499999996);
}
