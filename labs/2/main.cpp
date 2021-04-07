#include "Stack.h"
#include "Menu.h"

int main() {
    Menu menu;
    menu.start();


    Stack stack0();
    Stack stack1(20);
    for (int i = 0; i < 20; i++) {
        stack1.add(i + 1);
    }
    Stack stack2(stack1);
    cout << "FirstSize " << stack1.getSize() << endl;
    cout << "SecondSize " << stack2.getSize() << endl;
    stack1.add(20);
    stack1.print();
    cout << stack1.showFirst() << endl;
    cout << "\n" << stack1.getfirst();
    cout << "\n" << stack1.getfirst();
    cout << "\n" << stack1.getfirst();
    stack2.print();
    stack1.print();
    return 0;
}