// Этот файл содержит только точки вызова решений упражнений 1 и 2. Ответы и алгоритмы находятся в соответствующих файлах.

#include <iostream>
#include "taskOne.h"
#include "taskTwo.h"

int main()
{
    system("chcp 1251");      //Изменение кодировки консоли
    system("cls");            //Очистка консоли
    setlocale(LC_ALL, "rus"); //Изменение кодировки программы

    std::cout << "###ЗАДАНИЕ 1###\n";
    taskOne();
    std::cout << "\n###ЗАДАНИЕ 2###\n";
    taskTwo();
}