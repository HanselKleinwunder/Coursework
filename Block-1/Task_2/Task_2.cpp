#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Snake.h"
#include "Game.h"
#include "Const.h"

int main()
{
    unsigned int x = 0; //Координаты курсора
    int snake_size = 1;

    while (true) 
    {
        Sleep(300);
        system("cls");

        for (int i = 0; i < x; i++)
        {
            std::cout << ' ' << std::endl;
        }
        std::cout << head_symbol << std::endl;
    }

    std::cout << tail_symbol << std::endl;

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
