#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int randomNumber = -1;
  int numberCounter = 0;
  int selectedNumber = -1;

  srand(time(0));

  cout << "Program to show how many rolls before a selected number is rolled." << endl << endl;

  while (selectedNumber < 1 || selectedNumber > 6)
  {
    cout << "Enter a number on a 6 sided dice: ";
    cin >> selectedNumber;
  }


  while (randomNumber != selectedNumber)
  {

    randomNumber = rand() % 6 + 1;

    numberCounter++;
    cout << randomNumber << endl;
  }

  cout << "Number of rolls to hit " << selectedNumber << ": " << numberCounter << endl;

  return 0;
}
