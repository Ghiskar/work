#include "gtest/gtest.h"
#include "../../Test_4_5/work.h"

TEST(TestWork, Test_1){
    EXPECT_EQ(strcmp(even_words((char*)"qq w\n", 255), "qq"), 0);
}

TEST(TestWork, Test_2){
    EXPECT_EQ(strcmp(even_words((char*)" qq w\n", 255), "qq"), 0);
}

TEST(TestWork, Test_3){
    EXPECT_EQ(strcmp(even_words((char*)"qq w \n", 255), "qq"), 0);
}

TEST(TestWork, Test_4){
    EXPECT_EQ(strcmp(even_words((char*)" qq w \n", 255), "qq"), 0);
}

TEST(TestWork, Test_5){
    EXPECT_EQ(strcmp(even_words((char*)"q ww\n", 255), "ww"), 0);
}

TEST(TestWork, Test_6){
    EXPECT_EQ(strcmp(even_words((char*)" q ww\n", 255), "ww"), 0);
}

TEST(TestWork, Test_7){
    EXPECT_EQ(strcmp(even_words((char*)"q ww \n", 255), "ww"), 0);
}

TEST(TestWork, Test_8){
    EXPECT_EQ(strcmp(even_words((char*)" q ww \n", 255), "ww"), 0);
}

TEST(TestWork, Test_9){
    EXPECT_EQ(strcmp(even_words((char*)" qqq wwwwww rrrrr ff\n", 255), "wwwwww ff"), 0);
}

TEST(TestWork, Test_10){
    EXPECT_EQ(strcmp(even_words((char*)"qqqq w rrrr ff \n", 255), "qqqq rrrr ff"), 0);
}

TEST(TestWork, Test_11){
    EXPECT_EQ(strcmp(even_words((char*)" qqqq w rrrr f\n", 255), "qqqq rrrr"), 0);
}
