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

TEST(PracticeTest, descending_repeats)
{
    Practice obj;
    vector<int> sorted = obj.isPalindrome(2,3,2);
	vector<int> actualSorted = [3,2,2];
    ASSERT_EQ(sorted, actualSorted);
}
