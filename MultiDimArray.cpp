#include <iostream>
using namespace std;

int main() {
  int ships[4][4] = {
    { 0, 1, 1, 0 }, //0 is a false number, and number 1 and higher will be true
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  int hits = 0;
  int numberOfTurns = 0;

  while (hits < 4) {
    int row, column;

    cout << "Selecting coordinates\n";

    //let the player pick coordinates
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    if (ships[row][column]) { //if the coordinates(the row and column) falls on the number 1(e.g. [0][1]) in the "ships", then this condition is true 
      ships[row][column] = 0; //now the "if condition" is true, number 1 in that coordinate(e.g. [0][1]) will be change into 0

      hits++; //since the "if condition" is true because the coordinates falls to number 1 in the "ships",then increment(+1) the variable "hits"

      cout << "Hit! " << (4-hits) << " left.\n\n";//"hits" variable will increment(+1) and it is always subtracted to 4"(4-hits)" to print how many turn(s) left for you to try again
    } else {
      cout << "Miss\n\n"; //if the coordinate did not fall to number 1, then print "Miss"
    }

    numberOfTurns++; // as long as the "while (hits < 4)" is true, this count the number of turns you make until you win;
    //when the "while (hits < 4)" condition becomes false; this loop will stop, and then will print the next command
  }
  cout << "Victory!\n"; //when "while (hits < 4)" becomes false then print this
  cout << "You won in " << numberOfTurns << " turns";
  
  return 0;
}

