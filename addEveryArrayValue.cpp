#include <iostream>
using namespace std;
	
int main() {
int arr[5] = {5, 3, 2, 1, 7};
int b = 0;
int c = 0;
	for(int i = 0; i < size(arr); i++){
		b = arr[i];
		c += b;
	cout << c << endl;
	}
  return 0;
}

/*
for(int i = 0; i < size(arr)"which is 5";<--if this is true then increment i++);
this b = arr[i] takes the index number(0 1 2 3 4)
0: 5
1: 3
2: 2
3: 1
4: 7
this loop stops at 4 < size(arr)", because 5 is not less than 5.

Same goes with the loop like this;
for(int i = 0; i < 5; i++){
		cout<< i<< endl;
	}
	
this loop will print:
0: 0 (all starts with 0)
1: 1
2: 2
3: 3
4: 4 (and end with 4, because 5 is not less than 5)
	*/