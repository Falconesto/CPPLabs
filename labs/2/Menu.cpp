//
// Created by Александр on 21.03.2020.
//

#include "Menu.h"
#include <iostream>


using namespace std;

void Menu::start() {
    setlocale(LC_ALL, "Russian");
    Stack stackTmp(20);
    for (int i = 0; i < 20; i++) {
        stackTmp.add(i + 1);
    }
    cout << "Меню действий:" << endl
         << "1: Создать стек по умолчанию" << endl
         << "2: Создать стек копированием предыдущего" << endl
         << "3: Создать стек определенной глубины" << endl
         << "4: Добавить элемент" << endl
         << "5: Изъять элемент" << endl
         << "6: Получить количество элементов" << endl
         << "7: Проверить на пустоту" << endl
         << "8: Просмотреть верхний элемент" << endl
         << "9: Вывести стек на экран" << endl
         << "0: Закончить выполнение программы" << endl;
    int input;
    cin >> input;
    bool loop = true;
    bool program = true;
    while (program) {
        if (input == 1) {
            Stack stack0();
            cout << "Успешно!" << endl;
            loop = false;
        }
        if (input == 2) {
            Stack stack2(stackTmp);
            stack2.print();
            cout << "Успешно!" << endl;
            loop = false;
        }
        if (input == 3) {
            int tmp;
            cin >> tmp;
            Stack stack3(tmp);
            cout << "Успешно!" << endl;
            loop = false;
        }
        if (input == 4) {
            cout << "Введите элемент" << endl;
            int tmp;
            cin >> tmp;
            stackTmp.add(tmp);
            stackTmp.print();
            cout << "Успешно!" << endl;
        }
        if (input == 5) {
            cout << "Изъятие первого элемента: " << stackTmp.getfirst() << endl << "Успешно!" << endl;
        }
        if (input == 6) {
            cout << "Размер: " << stackTmp.getSize() << endl << "Успешно!" << endl;
        }
        if (input == 7) {
            cout << "Пустой?" << endl;
            if (stackTmp.isEmpty()) {
                cout << "да";
            } else {
                cout << "нет";
            }
            cout << "Успешно!" << endl;
        }
        if (input == 8) {
            cout << "Показ первого элемента: " << stackTmp.getfirst() << endl << "Успешно!" << endl;
        }
        if (input == 9) {
            cout << "Вывод стека на экран: ";
            stackTmp.print();
            cout << "Успешно!" << endl;
        }
        if (input == 0) {
            program = false;
            cout << "До Свидания!";
        }
        if ((input < 0) || (input > 9)) {
            cout << "Введите корректные значения" << endl;
        }
        cin>>input;
    }
}
