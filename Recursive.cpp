#include <iostream>
using namespace std;

int ImaFuncSum(int k) {//2nd. the variable "k" here is now 10
  if (k > 0) { //3rd. do this condition while k is greater than 0, or while this condition is true
    return k + ImaFuncSum(k - 1);//4th. here we declare "k + function(k - 1)" which makes "10 + ImaFuncSum(10 - 1)" 
                                 //0r "10 - 9(this is 9 since the function is k(which is 10) - 1)"
                                 //now while the "if" condition is true(which is k that has a value of 10, greater than zero)
                                 //do "k + ImaFuncSum(k - 1)" or "10 + ImaFuncSum(9)" or "10 + 9" = 19
                                 //since the condition is still true(the k is now 9) do "k + (k + ImaFuncSum(k - 1)" or "10 + (9 + ImaFuncSum(9 - 1)" which makes "10 + 9 + 8"
                                 //now, this condition will go  "k + (k  + ImaFuncSum(k - 1)" or
                                 // 10 + (9 +(8 +(7 +(6 +(5 +(4 + (3 + (2 + (1 + (0)))))))))) = 55
                                 //Now the "k" is 0, then stop the if condition
                                 //but since it uses return condition("return k + ImaFuncSum(k - 1)"), 
                                 //it will return the value of "k + ImaFuncSum(k - 1)" which is 55 to the function(ImaFuncSum)
  } else {
    return 0; //5th. Then this return to the equation
              // 10 + (9 +(8 +(7 +(6 +(5 +(4 + (3 + (2 + (1 + (0 +(0))))))))))) = 55
              // this ends the condition.
  }
}

int main() {
  int result = ImaFuncSum(10); //1st. using this function, we declare "k" as 10(which is the parameter of the function above(int k))
  cout << result; //6th. now print out the variable "result" that has a value of function, which is "ImaFuncSum(55)" since we uses return above"(a)"
  return 0;       //done!!
}


//Factorial
int func(int i) {
		if(i > 0){
			return i * func(i - 1); // variable "i" will be subtracted to 1 until "i" is 0 value
		}
		else{
			return 1; // This will return 1 when the variable "i" becomes 0,
                // so the condition in "if"(i > 0) will be false, because 0 is not greater than 0, then we go at the "else" condition,
                // that will return 1 to the "i" that has a 0 value.
                // if the return in "else" returned 0, then the result of "return" in "if" will be multiplied to 0
                // for example the value of "i" is 5
                // 5 * (5-1 = 4 *(4-1 = 3 *(3-1 = 2 * (2-1 = 1 *(1-1 = 0))))) this loop will stop since the i is now zero(and zero is not greater than zero)
                // if we use "return 0" in "else" to terminate the condition, the product return 120 in "if", will be multiplied to 0
                // that's why we use 1 instead of zero:
                // so the loop will go  5 * (5-1 = 4 *(4-1 = 3 *(3-1 = 2 * (2-1 = 1 *(1-1 = 0[return 1] * 1)))))
                // 5 * (4 *(3 *(2 *(1 *(1))))) = 120
		}
	}

int main() {
	int i;
	cout << "Enter a number: ";
	cin >> i;
	int result = func(i);
	cout << "Factorial of " << i << " is " << result; 
  return 0;
}


// #include <iostream>
// using namespace std;

// int ImaFuncSum(int k) {
//   if (k > 0) {
//     return k + ImaFuncSum(k - 1);
//   } else {
//     return 0; 
//   }
// }

// int func(int i) {
// 		if(i > 0){
// 			return i * func(i - 1); 
// 		}
// 		else{
// 			return 1; 
// 		}
// 	}


// int main() {

//   int result1 = ImaFuncSum(10); 
//   cout << result1 << endl;

// 	int i;
// 	cout << "Enter a number: ";
// 	cin >> i;
// 	int result = func(i);
// 	cout << "Factorial of " << i << " is " << result; 
//   return 0;
// }

