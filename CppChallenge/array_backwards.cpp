#include <iostream>
using namespace std;

void backwards(int a[], int b){
    int c = 0;
    for(int i = b; i > 0; i--){
        c = a[i - 1];
        cout << c << " ";
    }
}

int main(){
int num;
cin >> num;
int n[num];
    for(int i = 0; i < num; i++){
        cin >> n[i];
    }
backwards(n, num);
}