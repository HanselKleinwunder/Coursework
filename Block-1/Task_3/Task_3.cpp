#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Const.h"
#include "Snake.h"
#include "Game.h"
#include "Field.h"

int main()
{
	timeout = 500;
	snake_size = 1;
	snake_x[0] = 3;
	field[snake_x[0]] = '>'; // field[3];
	game_on = true;

	std::cout << "Press any key to start a new game!" << std::endl;

	char eCode = _getch();

	for (int i = 0; i < columns; i++)
	{
		std::cout << border_symbol;
	}

	while (game_on != false) {


	}
}