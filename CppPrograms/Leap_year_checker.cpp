#include <iostream>
#include <string>
using namespace std;

int main() {
  years:
  int year = 0;
  cout<< "Enter year: ";
  cin>> year;

  if(to_string(year).length() != 4){
    cout<<"Invalid year\n\n";
    goto years;
  }
  else if(year % 4 == 0 || year % 400 == 0 && year % 100 == 0){
    cout<<"It is a leap year!\n\n";
    goto years;
  }
  else if(year % 100 != 0 && year % 400 != 0){
    cout<<"It is not a leap year!\n\n";
    goto years;
  }
  else{
    cout<<"Invalid\n\n";
    goto years;
  }
  
    return 0;
}