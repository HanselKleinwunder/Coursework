#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Const.h"
#include "Snake.h"
#include "Game.h"

//Сделать так, чтобы выводилось заданное число символов snake_size
//Т.е., если 4, то голова + 3 части тела
//Сделать это вторым циклом. Только сначала выводится тело, потом голова

int main()
{
    unsigned int x = 0; //Координаты курсора
    snake_size = 10;
    timeout = 500;

    while (x < columns)
    {
        system("cls");

        if (snake_size != 0) 
        {
            for (int i = 0; i < x; i++)
            {
                std::cout << ' ';
            }

            for (size_t i = 0; i < snake_size - 1; i++)
            {
                std::cout << tail_symbol;
            }

            std::cout << head_symbol;

            x++;
        }
        else 
        {
            std::cout << "Error!" << std::endl;
            break;
        }

        Sleep(timeout);
    }
}