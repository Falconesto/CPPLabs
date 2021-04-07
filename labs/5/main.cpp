#include <iostream>
#include <vector>
#include "Exception.h"

template<class T>
T power(const T &a, const int &N) {
    T result = 1;
    for (int i = 0; i < N; i++) {
        result *= a;
    }
    return result;
}

template<class T>
std::vector<std::vector<T>> doubleArray(T value, int N, int M) {
    std::vector<std::vector<T>> result(N, std::vector<T>(M, value));
    return result;
}


int main() {
    try {
        int a = 5;
        int N = 3;
        std::cout << power(a, N) << std::endl;

        int n = 20;
        int m = 30;
        int x = 25;
        int y = -1;
        if((x>n)||(y>m)||(x<1)||(y<1)){
            throw Exception("ERROR. Out of range", 1);
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                std::cout << doubleArray(5, n, m)[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    catch (Exception &ex) {
        std::cout << "Message: " << ex.What() << "Code: " << ex.Code() << std::endl;
    }
}