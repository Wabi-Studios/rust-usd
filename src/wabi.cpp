#include <iostream>
#include <stdio.h>
#include <string>

#include "wabi.h"

int main() {
  double version = 21.11;
  printf(("Wabi USD: v" + std::to_string(wabi_binding(version)) + "\n").c_str());

  return 0;
}