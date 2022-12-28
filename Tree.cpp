#include <iostream>

using namespace std;
int main() {
	  int k = 0, rows = 5;
	  for(int i = 0; i < rows; i++){
		for(int j = 0; j < rows * 2 + 1; j++){
			cout<<((j < rows - k || j > rows + k)? " " : "X");
		}(i < rows - 3)?k++ : k = 0;
		cout<<endl;
	  }
return 0;

}