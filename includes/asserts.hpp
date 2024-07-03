#ifndef ASSERT_H
#define ASSERT_H
#include <string>
#include <iostream>
#include <sstream>

void ASSERT_EQ(int, int);
void ASSERT_STREQ(std::string, std::string);
void ASSERT_TRUE(bool);
void ASSERT_FALSE(bool);

#endif
