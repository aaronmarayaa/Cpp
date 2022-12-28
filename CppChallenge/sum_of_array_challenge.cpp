#include <iostream>
using namespace std;

class Solution{
    public:
    int getSum(int a[], int n) {
        int b = 0;
        for(int i = 0; i < n; i++){
            b += a[i];
        }
        return b;
    }   
};

int main() {
        int n;
        cout << "enter the length of numbers you want to add: ";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;

    return 0;
}
