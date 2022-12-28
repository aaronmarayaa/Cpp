#include <iostream>
using namespace std;

int main() {

  for(int i = 99;i > 0;i--){
    cout<< i <<" bottles of pop on the wall.\n";
    cout<<"Take one down and pass it around. \n" << i-1 <<" bottles of pop on the wall.\n\n";
  }
  return 0;
}