#include <iostream>
#include <conio.h>

int main()
{
    unsigned int count = ' '; //Count отвечает за сохранение символа направления движения

    std::cout << "Please set the direction of the snake." << std::endl;
    std::cout << "Directions are set by arrows." << std::endl;
    std::cout << "Exit - ESC." << std::endl;

    enum sKeys //Codes of symbols
    {
        Forward = 0x77,
        Back = 0x73,
        Left = 0x61,
        Right = 0x64,
        ESC = 0x1B
    };

    enum aKeys //Codes of arrows
    {
        Up = 0x26,
        Down = 0x28,
        aLeft = 0x25,
        aRight = 0x27,
    };

    while (count != ESC)
    {
        unsigned int eCode = _getch(); //Enter of arrows

        if (eCode == 0xE0 || eCode == 0)
        {
            eCode = _getch();
        }

        switch (eCode)
        {
            case Up:
                std::cout << '^' << std::endl;
                count = eCode;
                break;
            case Down:
                std::cout << 'v' << std::endl;
                count = eCode;
                break;
            case aLeft:
                std::cout << '<' << std::endl;
                count = eCode;
                break;
            case aRight:
                std::cout << '>' << std::endl;
                count = eCode;
                break;
            case ESC:
                count = eCode;
                break;
            default:
                std::cout << "Error. Please, enter correct character." << std::endl;
        }
    }
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
