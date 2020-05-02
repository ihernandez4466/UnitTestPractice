#ifndef PRACTICE_H
#define PRACTICE_H

#include <string>

using std::string;
int first;
int second;
int third;

class Practice
{
public:
  void sortDescending(int & first, int & second, int & third);
  bool isPalindrome(string input);
};

#endif
