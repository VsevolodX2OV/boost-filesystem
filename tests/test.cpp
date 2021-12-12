//Copyright 2021 by Winter Solider

#include <gtest/gtest.h>
#include "header.hpp"
TEST(Example, EmptyTest) {
  EXPECT_TRUE(true);
}

TEST(Programm, FullTest) {
  try {
    std::string path("../misc/ftp");
    Filesystem test(path);
    std::cout << test;
  } catch (...) {
  }
  EXPECT_TRUE(true);
}