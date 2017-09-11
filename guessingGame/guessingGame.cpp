#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int randomNumber,guess; //creating variables
  bool playAgain = true;
  char yesno;
  while (playAgain == true) {
    int tries = 1;
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    while (guess != randomNumber) {
      cin >> guess;
      if ( guess > randomNumber) {
	cout << "Your guess is to high \n" ;
	tries = tries + 1;
      }
      else if ( guess < randomNumber) {
	cout << "Your guess is to low \n";
	tries = tries +1;
      }
      if (guess == randomNumber) {
	cout << "It took you " << tries << " tries";
	cout << " Play again? ";
	cin >> yesno;
	if (yesno == ('n')) {
	    playAgain = false;
        }
      }
    }
  }
 return 0;
}
