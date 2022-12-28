#include <iostream>
using namespace std;

string a[10]={"one","two","three","four","five","six","seven","eight","nine"};
int main() {
    int t;
    cin >> t;
    if(t > 9)
        cout << "Greater than 9\n";
    else
        cout << a [t - 1] << endl;
    return 0;
}