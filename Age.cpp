// The computer selects a random age for the troll.
// In the beginning of the game, the troll can be between 100 and 199 years old.
// The user of the game plays the maiden.
// Note that the troll gets older every five years.
//
// It is the year 1000. A handsome prince is locked up in an enchanted castle guarded by an ugly old troll.
// Every five years, a fair maiden is allowed to come to the castle to try to free the prince.
// To free him, the maiden has to guess the troll's age.
// If the maiden guesses correctly, the prince is set free, they get married and live happily ever after.
// If the maiden guesses incorrectly, the troll says whether he is younger or older and the maiden has to come back in five years.
//
// David Tinley
// 09/19/2022

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;

int main() {

	srand(time(nullptr));

	int troll_age = (rand() % 100) + 100;
	int guess;
	int year = 1000;

	cout << "The troll is " << troll_age << "\n\n";

	cout << "Hello, handsome prince. I am an ugly old troll.\n";
	cout << "If you can guess my age, I will release the princess to you.\n";
	cout << "I am between 100 and 199\n";

	do {
		cout << "The year is " << year << ": What is your guess?\n";

		cin >> guess;

		if (guess < troll_age) {
			cout << "Wrong, I am older. No princess for you. See you in five years.\n";
		}
		else if (guess > troll_age) {
			cout << "Wrong, I am younger. No princess for you. See you in five years.\n";
		}
		else {
			cout << "You got it. I will release the princess to you. Live happily ever after.\n";
		}
		// Putting the increments outside of the nested if/else statements simplifies code
		// since it does not need to be in each if/else block
		year += 5;
		++troll_age;
		// Checking guess against the trolls age - 1 since it will be incremented right before the "while" check
	} while (guess != troll_age - 1);
	return 0;
}