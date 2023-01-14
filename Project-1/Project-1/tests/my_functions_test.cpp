#include <my_functions/my_functions.h>
#include <gtest/gtest.h>


TEST(my_sqrt_Test, TestIntegerOne_One)
{
    const auto expected = 1;
    const auto actual = my_sqrt(1);
    ASSERT_EQ(expected, actual);
}



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}