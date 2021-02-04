#include <iostream>


int fib(int n) {
  // base case when n=0
  if (n <= 1)
    return n;
  // run function recursively when n != 0
  return fib(n-1) + fib(n-2);
}

int main() {
  // test case
  std::cout << fib(9) << "\n"; // should output 34

  return 0;
}
