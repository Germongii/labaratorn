﻿

#include <iostream> // Объявление основной консольной библиотеки
#include <windows.h> // Библиотека для перехода на кодировку Utf8
int main() // Объявление функции main где начинается и заканчивается выполнение программы
{ // Открывающая скобка функции main
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для консоли
    std::cout << "First string\n"; // Вывод строки "First strint"
    std::cout << u8"Первая строкаn\nВторая строка" << std::endl; // Вывод двух строк "Первая строка" и "Вторая строка"   
    std::cout << u8"Спецсимволы \"\\\""; // Вывод строки Спецсимволы \"\\\"" с экранизацией

}


