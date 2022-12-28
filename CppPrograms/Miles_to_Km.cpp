#include <iostream>
using namespace std;

int main() {
  double miles;
  
  cout<< "Enter distance in miles: ";
  cin>> miles;
  double km = miles * 1.609;

  cout<< km << " km";
}