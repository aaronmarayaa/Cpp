#include <iostream>

using namespace std;
int main() {
    cout<< "This is Postfix" << endl;
      int x = 5; 
      cout<< x++ << endl;
      cout<< x << endl; 
    // it portrays as x first which means take the value of x first(which prints 5),
    // then the second is "++"(which turns 5 into 6) 
    // which means after taking the value of x, increment or add 1 the value of x; that is why the second "cout" is 6


    cout<< "This is Prefix" << endl;
    int j = 8;
    cout<< ++j << endl;
    cout<< j;  
    //this portrays "++" first which means increment or add 1 the value of j first(which turns 8 into 9)
    // then print out the value of j

return 0;
}