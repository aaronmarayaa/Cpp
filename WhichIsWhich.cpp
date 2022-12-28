#include <iostream>

using namespace std;
int main() {
      int a, b, c;
      which:
      cout<< "Which is Which?\n";
      cout << "First num: ";
      cin >> a;
      cout << "Second num: ";
      cin >> b;
      cout << "Third num: ";
      cin >> c;

      if(a > b && a > c){
        cout << a << " is the biggest\n\n";
        goto which;
      }
      else if(b > a && b > c){
        cout << b << " is the biggest\n\n";
        goto which;
      }
      else if(c > a && c > b){
        cout << c << " is the biggest\n\n";
        goto which;
      }
      else if(a == b && a > c || a == c && a > b){
        cout << a << " is the biggest\n\n";
        goto which;
      }
      else if(b == a && b > c || b == c && b > a){
        cout << b << " is the biggest\n\n";
        goto which;
      }
      else if(c == a && c > b || c == b && c > a){
        cout << c << " is the biggest\n\n";
        goto which;
      }
      else if( a == b && a == c && b == a && b == c && c == a && c == b){
        cout << "They are all equal\n\n";
        goto which;
      }
      else{
        cout<<"invalid input";
        goto which;
      }

return 0;

}