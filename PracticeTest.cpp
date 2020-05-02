/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racesecar");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, palindrome_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("Redrum si r is murder");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_Descending)
{
    Practice obj;
    int first = 1;
    int second = 2;
    int third = 3;
    obj.sortDescending(first,second,third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1); 
}