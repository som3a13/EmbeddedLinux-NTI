#include <gtest/gtest.h>
#include <iostream>



int sum(int x,int y)
{
    return x+y;
}
int Div(long x,long y)
{
    return x/y;
}

int main()
{
    ::testing::InitGoogleTest();

    std::cout << "Hello" << std::endl;
    return RUN_ALL_TESTS();
}
TEST(MyTestSuite,MyTestCase)
{
    EXPECT_NE(sum(2,2),4);
}
TEST(MyTestSuite2,MyTestCase)
{
    EXPECT_EQ(sum(2,2), 4);
}
TEST(MyTestSuite3,MyTestCase)
{
    EXPECT_EQ(Div(4,2), 2);
}

