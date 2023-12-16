#include <iostream>
using namespace std;

int main() {
  int nums[] = {1, 2, 4, 3, 4, 3, 2};
  int result = nums[0]; // Start with the first element
  for (int i = 1; i < 7; i ++){
    result ^= nums[i];
  }
  cout << result << endl;
}