//
// Created by Александр on 06.03.2020.
//


#include "Stack.h"

Stack::Stack()
{
    data.resize(theSize);
}

Stack::Stack(const Stack& otherStack){
    this->theSize = otherStack.theSize;
    this->data = otherStack.data;
    this->position = otherStack.position;
}

Stack::Stack(int size)  {
    this->theSize=size;
}

int Stack::getSize()  {
    return this->position;
}

void Stack::add(int x) {
    if(this->position==this->theSize){
        cout<< "too much\n";
        return;
    }
    this->data.push_back(x);
    this->position++;
}

int Stack::getfirst(){
    int x=this->data[--position];
    this->data.pop_back();
    return x;
}

bool Stack::isEmpty() {
    if(position==0){
        return true;
    }else{
        return false;
    }
}

int Stack::showFirst() {
    return this->data[position-1];
}

void Stack::print(){
    int tmpPosition=position;
    cout<< "\n";
    cout<< "max size: " << this->theSize << "\ncurrent size: " << this->position;
    cout<< "\ndata: [ ";
    while(!isEmpty()){
        cout<<this->data[position-1]<< " ";
        position--;
    }
    cout<< "]\n\n";
    position=tmpPosition;
}
