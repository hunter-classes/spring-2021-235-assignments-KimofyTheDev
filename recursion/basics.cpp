#include <iostream>


int fib(int n) {
  // base case when n=0
  if (n <= 1)
    return n;
  // run function recursively when n != 0
  return fib(n-1) + fib(n-2);
}

int fibiter(int n){
  // store first number
  int numOne = 0;
  // store second number
  int numTwo = 1;

  // loop until n-th number
  for(int i = 1; i <= n; i++){
    // take sum of previous two numbers and save as new number
    int sum = numOne + numTwo;
    //swap first num with second num ("forget" first num)
    numOne = numTwo;
    //save new num as numTwo
    numTwo = sum;
  }
  // return numOne
  return numOne;
}

int main() {
  // test cases
  std::cout << fib(9) << "\n"; // should output 34
  std::cout << fibiter(9) << "\n"; // should output 34
  return 0;
}
