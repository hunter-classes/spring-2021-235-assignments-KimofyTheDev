#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char startRod, char endRod, char tempRod) {
  if (n == 1) {
    cout << "Move disk 1 from rod " << startRod << " to rod " << endRod<<endl;
    return;
  }

  towerOfHanoi(n - 1, startRod, tempRod, endRod);
  cout << "Move disk " << n << " from rod " << startRod << " to rod " << endRod << endl;
  towerOfHanoi(n - 1, tempRod, endRod, startRod);
}

int main() {
  towerOfHanoi(1, 'A', 'C', 'B'); // Output: 1 move
  std::cout << std::endl;
  towerOfHanoi(2, 'A', 'C', 'B'); // Output: 3moves
  std::cout << std::endl;
  towerOfHanoi(3, 'A', 'C', 'B'); // Output: 7 moves
  std::cout << std::endl;
  towerOfHanoi(4, 'A', 'C', 'B'); // Output: 15 moves
  std::cout << std::endl;
  return 0;
}
