#include <iostream>
using namespace std;

int main(){
    string arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    int o;
    cin >> n >> o;
    for(int i = n; i <= o; i++)
        if(i >= 1 && i <= 9)
            cout<< arr[i - 1] << endl;
        else{
            if(i % 2 == 0)
                cout<<"even\n";
            else{
                cout <<"odd\n";
            }
        }
    return 0;
}