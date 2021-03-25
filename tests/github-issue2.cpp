// minimal test case for https://github.com/stbrumme/hash-library/issues/2
// g++ github-issue2.cpp ../sha*.cpp ../keccak.cpp ../md5.cpp -o github-issue2 && ./github-issue2


#include "../md5.h"
#include <iostream>

int main()
{
  std::string text = "hello world";

  std::cout << "MD5:" << std::endl;
  MD5 md5;
  md5.add(text.c_str(), text.size());

  std::cout << md5.getHash() << std::endl;
  std::cout << md5.getHash() << std::endl;
  std::cout << md5.getHash() << std::endl;

  return 0;
}
