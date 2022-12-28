#include <iostream>
using namespace std;

int max_num(int a, int b, int c, int d){
    return max(max(a, b), max(c, d));
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_num(a, b, c, d);;
}