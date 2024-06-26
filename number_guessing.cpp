//Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the guess is too high or too low until the user guesses the correct number.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  int secretNumber = rand() % 100 + 1;
  int guess;
  bool guessed = false;
  int count = 0;
  srand(time(0));

  while (!guessed) {
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    if (count == 10){
      cout << "You lose!" << endl;
      break;
    }
    else{
    if (guess == secretNumber) {
      cout << " Congratulations! You guessed the correct number.\n";
      guessed = true;
    }
    else if ((guess < secretNumber) && ((secretNumber-guess)<= 15)) {
      cout << "low! Try again.\n";
      count++;
    }
    else if ((guess > secretNumber) && ((guess-secretNumber)<= 15)) {
      cout << "high! Try again.\n";
      count++;
    }
    else if (guess < secretNumber) {
        cout << "Too low! Try again.\n";
        count++;
    } else {
      cout << "Too high! Try again.\n";
      count++;
    }
    }
  }

  return 0;
}