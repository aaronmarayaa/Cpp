#include <iostream>

using namespace std;
int main() {
        float prelim_grade = 0;
  float midterm_grade = 0;
  float finals_grade = 0;
  cout<< "prelim term: ";
  cin>> prelim_grade;
  cout<< "mid term: ";
  cin>> midterm_grade;
  cout<< "finals term: ";
  cin>> finals_grade;
  float total_grade = prelim_grade + midterm_grade + finals_grade;

  cout<< "Total: "<< total_grade / 3;

return 0;

}