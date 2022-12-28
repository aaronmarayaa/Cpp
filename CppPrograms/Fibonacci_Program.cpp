#include <iostream>

using namespace std;
int main() {
      int num_one = 0, num_two = 1, num_three, input_num;    
  cout<<"Enter the number of elements: ";    
  cin>> input_num;    
  cout<< num_one << " " << num_two << " "; //printing 0 and 1

    for(int i = 2; i < input_num; ++i) //loop starts from 2 because 0 and 1 are already printed    
    {    
        num_three = num_one + num_two; // it adds the value of num_one and num_two which makes the num_three = 1.
        cout<< num_three << " "; // then it prints the num_three which is equals to 1.
        num_one = num_two; // then declare the value of num_one as the value of num_two(which makes num_one = 1, because num_two is equals to 1).
        num_two = num_three; // then the value of num_two as the value of num_three(which makes num_two = 1, because we declare the value of num_three to 1).
    }    
return 0;
}

/*
first here's a quick format of the program:
(since we print the value 0 and 1, the program will always print 0 1 at every fibonacci loop)
Enter the number of elements: (e.g.) 9
num_one + num_two = num_three
    0       1           1
    1       1           2
    1       2           3
    2       3           5
    3       5           8
    5       8           13
    8       13          21

here how's the program works:
the value of num_one just becomes the value of num_two, and the value of num_two just become the value of num_three
then add these variables num_one and num_two which makes the value of num_three.
    num_one = 0 + num_two = 1 = 1(this sum is now the value of num_three, and this value will be printed out)
    num_one = num_two; or num_one = 1
    num_two = num_three; or num_two = 1

    num_one = 1 + num_two = 1 = 2(this sum is now the value of num_three, and this value will be printed out)
    num_one = num_two; or num_one = 1
    num_two = num_three; or num_two = 2

    num_one = 1 + num_two = 2 = 3(this sum is now the value of num_three, and this value will be printed out)
    num_one = num_two; or num_one = 2
    num_two = num_three; or num_two = 3

    num_one = 2 + num_two = 3 = 5(this sum is now the value of num_three, and this value will be printed out)
    num_one = num_two; or num_one = 3
    num_two = num_three; or num_two = 5

    num_one = 3 + num_two = 5 = 8(this sum is now the value of num_three, and this value will be printed out)
    num_one = num_two; or num_one = 3
    num_two = num_three; or num_two = 5

    ...
*/