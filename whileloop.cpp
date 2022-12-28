#include <iostream>

using namespace std;

int main()
{
int k = 0;
 while(k < 10){ //1st: if this is true
    if(k == 5){ // 3rd: if k is equals to 5 then
        k++;    //5th <-- increment
        continue; //4th <-- continue the
    }
    cout << k << "\n";
    k++;//2nd: then increment k
 }
 return 0;
}

