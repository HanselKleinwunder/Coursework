#include <iostream>

int main()
{
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
