#include <iostream>
using namespace std;

int main() {
    //block composed of set(s)
    //sets composed of value(s)
  string letters[4][2][3] = { //[block][set][value]
      {
    { "A", "B", "C"},
    { "D", "E", "F"}
  },
  {
    { "G", "H", "I" },
    { "J", "K", "L" }
  },
   {
    { "M", "N", "O" },
    { "P", "Q", "R" }
  },
   {
    { "S", "T", "U" },
    { "V", "W", "X" }
  },
};
  cout << letters[3][1][2];
  return 0;
}

