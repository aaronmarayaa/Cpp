#include <iostream>
using namespace std;

int main() {
  
  int i = 0;
  int square = 0;
  int num;

    cout<< "Enter number: ";
    cin>> num;

  while(i < num){
    cout<<i<<"  "<<square * i<< endl;
    square++;
    i++;
  }
  return 0;
}