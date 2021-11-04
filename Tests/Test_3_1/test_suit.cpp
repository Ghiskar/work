#include "gtest/gtest.h"
#include "../../Test_3_1/work.h"

TEST(TestWork, TestCount){
    EXPECT_EQ(count_digits(6478329), 7);
}
