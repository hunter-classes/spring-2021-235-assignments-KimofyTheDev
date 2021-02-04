#include <iostream>

int stepPerm(int n){

  // base cases
  if(n == 0 || n == 1) {
    return 1;
  }
  else if(n == 2) {
    return 2;
  }
  // recursively find step possibilities
  return stepPerm(n - 1) + stepPerm(n - 2) + stepPerm(n - 3);
}


int main(){
  // test cases
  std::cout << stepPerm(3) << std::endl; // output should be 4
  std::cout << stepPerm(5) << std::endl; // output should be 13
}
