#include <iostream>
#include <conio.h>

int main()
{
//Task-1
#if 0
    char count = ' ', code; //Count отвечает за сохранение символа направления движения, code за получение кода символа

    std::cout << "Please set the direction of the snake:" << std::endl;

    while (count != '0')
    {
        std::cin >> code;

        switch (code) 
        {
            case 'w':
            case 'W':
                std::cout << '^' << std::endl;
                count = code;
                break;
            case 's':
            case 'S':
                std::cout << 'v' << std::endl;
                count = code;
                break;
            case 'a':
            case 'A':
                std::cout << '<' << std::endl;
                count = code;
                break;
            case 'd':
            case 'D':
                std::cout << '>' << std::endl;
                count = code;
                break;
            case '0':
                count = code;
                break;
            default:
                std::cout << "Error." << std::endl;
        }
    }
#endif
//Task-2
#if 0
    char count = ' '; //Count отвечает за сохранение символа направления движения

    std::cout << "Please set the direction of the snake." << std::endl;
    std::cout << "Directions are set by keys: forward - w, back - s, left - a, right - d." << std::endl;
    std::cout << "Exit - ESC." << std::endl;

    enum vKeys //Codes of symbols
    {
        Forward = 0x77,
        Back = 0x73,
        Left = 0x61,
        Right = 0x64,
        ESC = 0x1B
    };

    while (count != ESC)
    {
        char eCode = _getch(); //Enter of symbol

        switch (eCode)
        {
        case Forward:
            std::cout << '^' << std::endl;
            count = eCode;
            break;
        case Back:
            std::cout << 'v' << std::endl;
            count = eCode;
            break;
        case Left:
            std::cout << '<' << std::endl;
            count = eCode;
            break;
        case Right:
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
#endif
//Task-3
#if 0
    unsigned int count = ' '; //Count отвечает за сохранение символа направления движения

    std::cout << "Please set the direction of the snake." << std::endl;
    std::cout << "Directions are set by arrows." << std::endl;
    std::cout << "Exit - ESC." << std::endl;

    enum aKeys //Codes of arrows
    {
        Up = 72,
        Down = 80,
        aLeft = 75,
        aRight = 77,
        ESC = 0x1B
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
#endif
}
