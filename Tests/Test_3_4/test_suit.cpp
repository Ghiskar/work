#include "gtest/gtest.h"
#include "../../Test_3_4/work.h"

TEST(TestWork, TestPositiveInt){
    char* intRes = (char*)malloc(sizeof(char)*int_length);
    *intRes = '\0';

    int_part(intRes, 854);

    EXPECT_EQ(strcmp(intRes, "1101010110"), 0);

    free(intRes);
}

TEST(TestWork, TestNegativeInt){
    char* intRes = (char*)malloc(sizeof(char)*int_length);
    *intRes = '\0';

    int_part(intRes, -854);

    EXPECT_EQ(strcmp(intRes, "11111111111111111111110010101010"), 0);

    free(intRes);
}

TEST(TestWork, TestFloat){
    char* floatRes  = (char*)malloc(sizeof(char)*(float_length+1));
    *floatRes       = '\0';

    float_part(floatRes, 0.74897);

    EXPECT_EQ(strcmp(floatRes, ".10111111"), 0);
}

TEST(TestWork, TestPositiveNullInt){
    EXPECT_EQ(strcmp(to_binary(0.574), "0.10010010"), 0);
}

TEST(TestWork, TestNegativeNullInt){
    EXPECT_EQ(strcmp(to_binary(-0.781), "0.11000111"), 0);
}

TEST(TestWork, TestCommonPositive){
    EXPECT_EQ(strcmp(to_binary(981264.241274), "11101111100100010000.00111101"), 0);
}

TEST(TestWork, TestCommonNegative){
    EXPECT_EQ(strcmp(to_binary(-981264.241274), "11111111111100010000011011110000.00111101"), 0);
}
