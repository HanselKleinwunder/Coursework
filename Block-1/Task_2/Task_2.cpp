#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Const.h"
#include "Snake.h"
#include "Game.h"

//������� ���, ����� ���������� �������� ����� �������� snake_size
//�.�., ���� 4, �� ������ + 3 ����� ����
//������� ��� ������ ������. ������ ������� ��������� ����, ����� ������

int main()
{
    unsigned int x = 0; //���������� �������
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