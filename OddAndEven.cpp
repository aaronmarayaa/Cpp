#include <iostream>

using namespace std;
int main() {
	int k;
	k = 0;
	while(k <= 10){
		if(k % 2 == 0 ){
			cout<< k << " is even number" << endl;
		}
		else{
			cout<< k << " is odd number" << endl;
		}
		k++;
	}
return 0;

}