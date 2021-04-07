//
// Created by Александр on 20.03.2020.
//

#ifndef INC_3_ARRAYCLASS_H
#define INC_3_ARRAYCLASS_H

class ArrayClass{
public:
    int length;
    int* data;

    ArrayClass(int);

    void input(int x, int i);

    bool operator==(const ArrayClass&);
    bool operator!=(const ArrayClass&);
    bool operator>(const ArrayClass&);
    bool operator<(const ArrayClass&);
};

#endif //INC_3_ARRAYCLASS_H
