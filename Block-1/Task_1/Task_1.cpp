#include <iostream>
#include <conio.h>

int main()
{
    char count, code; //Count �������� �� ���������� ������� ����������� ��������, code �� ��������� ���� �������

    std::cout << "Please set the direction of the snake:" << std::endl;
    std::cin >> code;

    while (true) 
    {
        switch (code) 
        {
            case 'w':
            case 'W':
                std::cout << '^' << std::endl;
                break;
            case 's':
            case 'S':
                std::cout << 'v' << std::endl;
                break;
            case 'a':
            case 'A':
                std::cout << '<' << std::endl;
                break;
            case 'd':
            case 'D':
                std::cout << '>' << std::endl;
                break;
            case '0':
                break;
        }
        break;
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
