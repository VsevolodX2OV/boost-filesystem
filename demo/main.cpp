//Copyright 2021 by Winter Solider

#include <header.hpp>
#include <iostream>


int main() {
  std::string path("/home/coma/CLionProjects/lab4/misc/ftp");
  Filesystem test(path);
  std::cout << test;
}