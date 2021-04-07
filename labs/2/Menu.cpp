//
// Created by ��������� on 21.03.2020.
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
    cout << "���� ��������:" << endl
         << "1: ������� ���� �� ���������" << endl
         << "2: ������� ���� ������������ �����������" << endl
         << "3: ������� ���� ������������ �������" << endl
         << "4: �������� �������" << endl
         << "5: ������ �������" << endl
         << "6: �������� ���������� ���������" << endl
         << "7: ��������� �� �������" << endl
         << "8: ����������� ������� �������" << endl
         << "9: ������� ���� �� �����" << endl
         << "0: ��������� ���������� ���������" << endl;
    int input;
    cin >> input;
    bool loop = true;
    bool program = true;
    while (program) {
        if (input == 1) {
            Stack stack0();
            cout << "�������!" << endl;
            loop = false;
        }
        if (input == 2) {
            Stack stack2(stackTmp);
            stack2.print();
            cout << "�������!" << endl;
            loop = false;
        }
        if (input == 3) {
            int tmp;
            cin >> tmp;
            Stack stack3(tmp);
            cout << "�������!" << endl;
            loop = false;
        }
        if (input == 4) {
            cout << "������� �������" << endl;
            int tmp;
            cin >> tmp;
            stackTmp.add(tmp);
            stackTmp.print();
            cout << "�������!" << endl;
        }
        if (input == 5) {
            cout << "������� ������� ��������: " << stackTmp.getfirst() << endl << "�������!" << endl;
        }
        if (input == 6) {
            cout << "������: " << stackTmp.getSize() << endl << "�������!" << endl;
        }
        if (input == 7) {
            cout << "������?" << endl;
            if (stackTmp.isEmpty()) {
                cout << "��";
            } else {
                cout << "���";
            }
            cout << "�������!" << endl;
        }
        if (input == 8) {
            cout << "����� ������� ��������: " << stackTmp.getfirst() << endl << "�������!" << endl;
        }
        if (input == 9) {
            cout << "����� ����� �� �����: ";
            stackTmp.print();
            cout << "�������!" << endl;
        }
        if (input == 0) {
            program = false;
            cout << "�� ��������!";
        }
        if ((input < 0) || (input > 9)) {
            cout << "������� ���������� ��������" << endl;
        }
        cin>>input;
    }
}
