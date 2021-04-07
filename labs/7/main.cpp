#include <iostream>
#include <algorithm>
#include "Circuit_Buffer.h"

int main() {
    unsigned capacity;
    unsigned cur_size;
    std::cin >> capacity >> cur_size;
    circular_buffer<int> buffer(capacity);
    for (int i = 0; i < cur_size; i++) {
        int value;
        std::cin >> value;
        buffer.push_front(value);
        std::cin >> buffer;
        buffer.print_all();
    }

    buffer.push_back(2);
//    buffer.push_back(3);
//    buffer.push_back(4);
//    buffer.push_back(5);
//    buffer.push_back(6);
//    buffer.push_back(7);
//    buffer.push_back(8);
    buffer.print_all();

    buffer.pop_back();
    buffer.print_all();
    buffer.pop_front();
    buffer.print_all();

    buffer.resize(20);
    buffer.print_all();

    for (int & it : buffer) {
        std::cout << it << std::endl;
    }
    std::cout<< buffer[2]<< std::endl;

    buffer.push_mid(3,0);
    buffer.print_all();
    buffer.pop_mid(0);
    buffer.print_all();
//    std::sort(buffer.begin(), buffer.end());
//    buffer.print_all();
}