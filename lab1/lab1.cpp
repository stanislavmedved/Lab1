// Этот файл содержит только точки вызова решений упражнений 1 и 2. Ответы и алгоритмы находятся в соответствующих файлах.

#include <iostream>
#include "taskOne.h"
#include "taskTwo.h"

int main()
{
    //Изменение кодировки консоли и программы
    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "rus");

    std::cout << "###ЗАДАНИЕ 1###\n";
    taskOne();
    std::cout << "###ЗАДАНИЕ 2###\n";
    taskTwo();
}