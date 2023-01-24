#include <my_functions/my_functions.h>
#include <gtest/gtest.h>


TEST(my_functions_Test, TestFibOne_One)
{
    const auto expected = 1;
    const auto actual = fibonacci(1);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestFibZero_Zero)
{
    const auto expected = 0;
    const auto actual = fibonacci(0);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestFibTen_55)
{
    const auto expected = 55;
    const auto actual = fibonacci(10);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPrimeZero_False)
{
    const auto expected = false;
    const auto actual = isPrime(0);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPrime13_True)
{
    const auto expected = true;
    const auto actual = isPrime(13);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPrime21_False)
{
    const auto expected = false;
    const auto actual = isPrime(21);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPowerOfTwo_Zero_False)
{
    const auto expected = false;
    const auto actual = isPowerOfTwo(0);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPowerOfTwo_One_True)
{
    const auto expected = true;
    const auto actual = isPowerOfTwo(1);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestIsPowerOfTwo_1024_True)
{
    const auto expected = true;
    const auto actual = isPowerOfTwo(1024);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestNumOfOnes_Zero_Zero)
{
    const auto expected = 1;
    const auto actual = numOfOnes(1);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestNumOfOnes_One_One)
{
    const auto expected = 1;
    const auto actual = numOfOnes(1);
    ASSERT_EQ(expected, actual);
}

TEST(my_functions_Test, TestNumOfOnes_Two_One)
{
    const auto expected = 1;
    const auto actual = numOfOnes(2);
    ASSERT_EQ(expected, actual);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}