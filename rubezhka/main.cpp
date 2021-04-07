#include <iostream>


class PowerTwo {
private:
    int powerNum;
public:
    PowerTwo();

    PowerTwo(int power);

    PowerTwo(const PowerTwo &other);

    PowerTwo operator*(const PowerTwo &other);

    PowerTwo operator/(const PowerTwo &other);
};

PowerTwo::PowerTwo(int power) {
    this->powerNum = power;
}

PowerTwo::PowerTwo(const PowerTwo &other) {
    this->powerNum = other.powerNum;
}

PowerTwo PowerTwo::operator*(const PowerTwo &other) {
    PowerTwo neW(this->powerNum+other.powerNum);
    return neW;
}

PowerTwo PowerTwo::operator/(const PowerTwo &other) {
    PowerTwo neW(this->powerNum-other.powerNum);
    return neW;
}

int main() {
    PowerTwo first(5);
    PowerTwo second(2);
    PowerTwo third=first*second;
    return 0;
}