#include "gtest/gtest.h"
#include "../../Test_4_6/work.h"

TEST(TestWork, TestOpenMore){
    EXPECT_EQ(bracket_expression((char*)"{{{ }} { } {{{{ }"), 0);
}

TEST(TestWork, TestCloseMore){
    EXPECT_EQ(bracket_expression((char*)"{{{ }} { }}}"), 0);
}

TEST(TestWork, TestCloseBeforeOpen){
    EXPECT_EQ(bracket_expression((char*)"{{ }}}} {{"), 0);
}

TEST(TestWork, TestEight){
    EXPECT_EQ(bracket_expression((char*)"{{{ }} {} {{{{ }} {{ }}}}}"), 1);
}
