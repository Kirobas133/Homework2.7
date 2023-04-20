﻿// Homework2.7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#define MODE 0;

#if MODE == 1
    void add() {
        int a, b;
        std::cout << "Введите число 1: ";
        std::cin >> a;
        std::cout << "Введите число 2: ";
        std::cin >> b;

        std::cout << "Результат сложения: " << (a + b);
}
    int main()
    {
        setlocale(LC_ALL, "Russian");
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        std::cout << "Работаю в боевом режиме\n";
        add();

#elif MODE == 0
    int main() {
        setlocale(LC_ALL, "Russian");
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        std::cout << "Работаю в режиме тренировки\n";

#else
    int main(){
        setlocale(LC_ALL, "Russian");
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        std::cout << "Неизвестный режим. Завершение работы";
#endif  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
