#include <iostream>

using namespace std;
int main() {
    char Operator;
    int a, b;

    cout<< "First num: ";
    cin>> a;
    cout<< "Operator: ";
    cin>> Operator;
    cout<< "Second num: ";
    cin>> b;

switch (Operator)
{
case '+':
    cout << a << " + " << b << " = " << a + b;
    break;
case '-':
    cout << a << " - " << b << " = " << a - b;
    break;
case '/':
    cout << a << " / " << b << " = " << a / b;
    break;
case '*':
    cout << a << " * " << b << " = " << a * b;
    break;
default:
    break;
}
return 0;

}