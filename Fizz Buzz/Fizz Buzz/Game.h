#pragma once
#include <iostream>

using namespace std;

class Game
{
private:
	const int MAX_COUNT = 100;
	const int fizz = 3;
	const int buzz = 5;
	int results[100];
public:
	void PlayGame();
};

