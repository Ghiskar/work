#include "stdlib.h"
#include "gtest/gtest.h"
#include "../../Test_3_2/work.h"

// TEST IsMin
TEST(TestWork, TestMinTrue){
    EXPECT_EQ(is_min(78, 93), 1);
}

TEST(TestWork, TestMinFalse){
    EXPECT_EQ(is_min(93, 78), 0);
}

TEST(TestWork, TestMinEqual){
    EXPECT_EQ(is_min(78, 78), 1);
}

// TEST MinElement
TEST(TestWork, TestMinElement){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 815;
    array[1] = 489;
    array[2] = 652;

    EXPECT_EQ(min_element(array, 3), 489);
}

// TEST IsInt
TEST(TestWork, TestIsIntTrue){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 815;
    array[1] = 489;
    array[2] = 652;

    EXPECT_EQ(is_int(array, 3, 163), 1);
}

TEST(TestWork, TestIsIntFalse){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 815;
    array[1] = 489;
    array[2] = 652;

    EXPECT_EQ(is_int(array, 3, 190), 0);
}

// TEST MinDivider
TEST(TestWork, TestMinDividerNotOne){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 815;
    array[1] = 489;
    array[2] = 652;

    EXPECT_EQ(min_divider(array, 3), 163);
}

TEST(TestWork, TestMinDividerIsOne){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 73;
    array[1] = 36;
    array[2] = 111;

    EXPECT_EQ(min_divider(array, 3), 1);
}

TEST(TestWork, TestMinDividerIsMinOfNumbers){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 512;
    array[1] = 4352;
    array[2] = 256;

    EXPECT_EQ(min_divider(array, 3), 256);
}

TEST(TestWork, TestMinDividerAllEqual){
    unsigned long int *array = (unsigned long int*)malloc(sizeof(unsigned long int));
    array[0] = 815;
    array[1] = 815;
    array[2] = 815;

    EXPECT_EQ(min_divider(array, 3), 815);
}
