#include <iostream>
#include <vector>

template <class T>
class Equal {
public:
    explicit Equal(const T& value) : value(value) {}
    bool operator() (T& x) {
        return x == value;
    }
private:
    T value;
};

template <class Iterator, class BoolFunc>
bool anyOf(Iterator begin, Iterator end, BoolFunc func) {
    for(; begin != end; begin++) {
        if(func(*begin))
            return true;
    }
    return false;
}

template <class Iterator, class BoolFunc>
bool isPartitioned(Iterator begin, Iterator end, BoolFunc func) {
    bool changed = false;
    for(; begin != end; begin++) {
        if(func(*begin)) {
            changed = true;
        } else if(changed) {
            return false;
        }
    }
    return true;
}

template <class Iterator, class T>
T findNot(Iterator begin, Iterator end, T& value) {
    for(; begin != end; begin++) {
        if(*begin != value)
            return *begin;
    }
    return *end;
}



int main(){
    std::vector<int> v = {1, 2, 3, 4, 5, 5, 5, 5};
    int value = 5;
    std::cout << value << " is Any of... " << anyOf(v.begin(), v.end(), Equal(value)) << std::endl;
    std::cout << value << " is Partitioned... " << isPartitioned(v.begin(), v.end(), Equal(value)) << std::endl;
    std::cout << value << " is Find not... " << findNot(v.begin(), v.end(), value) << std::endl;
    return 0;
}
