//
// Created by Александр on 20.03.2020.
//
#include "arrayClass.h"

ArrayClass::ArrayClass(int length) {
    this->length=length;
    this->data=new int[length];
    for(int i=0; i<length; i++){
        this->data[i]=0;
    }
}

void ArrayClass::input(int x, int i) {
    this->data[i]=x;
}

bool ArrayClass::operator==(const ArrayClass& secondArray) {
    return this->length == secondArray.length;
}

bool ArrayClass::operator!=(const ArrayClass& secondArray) {
    return this->length != secondArray.length;
}

bool ArrayClass::operator>(const ArrayClass& secondArray) {
    return this->length > secondArray.length;
}

bool ArrayClass::operator<(const ArrayClass& secondArray) {
    return this->length < secondArray.length;
}