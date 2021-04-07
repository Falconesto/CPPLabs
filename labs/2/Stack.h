//
// Created by Александр on 06.03.2020.
//

#ifndef INC_2_STACK_H
#define INC_2_STACK_H
#include <cstdint>
#include <vector>
#include <iostream>

using namespace std;

const int MAX_SIZE = INT32_MAX;


class Stack {
public:
    Stack();
    Stack(const Stack& otherStack);
    Stack(int size = MAX_SIZE);

    int getSize();
    void add(int x);
    int getfirst();
    bool isEmpty();
    int showFirst();
    void print();

private:
    int theSize = 10;
    int position = 0;
    vector<int> data;
};

#endif //INC_2_STACK_H
