#include "Game.h"

void Game::PlayGame()
{
	/* If a number is divisible by 3, print “fizz” rather than the number.
	If a number is divisible by 5, then print “buzz” rather than the number.
	If a number is divisible by both, then print “fizz buzz”
	else print num */

	for (int i = 1; i <= MAX_COUNT; i++)
	{
		if ((i % fizz == 0) && (i % buzz == 0))
			cout << "fizzbuzz" << endl;
		else if (i % fizz == 0)
			cout << "fizz" << endl;
		else if (i % buzz == 0)
			cout << "buzz" << endl;
		else
			cout << i << endl;

		results[i-1] = i;
	}
}
