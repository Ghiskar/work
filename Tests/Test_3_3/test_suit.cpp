#include "gtest/gtest.h"
#include "../../Test_3_3/work.h"

TEST(TestWork, TestSwap){
    EXPECT_EQ(swap_digits(879871), 179878);
}
