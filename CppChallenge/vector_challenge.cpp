#include <iostream>
#include <vector>
using namespace std;

vector<int> first_three_multiples(int num) {
  vector<int> multiples = {num, num * 2, num * 3};
  
  return multiples;
}

int main() {
  for (int element : first_three_multiples(8)) {
    cout << element << "\n";
    
  }
  
}