#include <iostream>
#include "square.h"
#include "arrayClass.h"

using namespace std;

int main() {
    ArrayClass firstArray(10);
    for(int i=0; i<10; i++){
        firstArray.input(i, i);
    }
    ArrayClass secondArray(5);
    for(int i=0; i<5; i++){
        firstArray.input(i, i);
    }

    if(firstArray.operator==(secondArray)){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }

    if(firstArray!=secondArray){
        cout<<"not equal"<<endl;
    }else{
        cout<<"equal"<<endl;
    }

    if(firstArray>secondArray){
        cout<<"more"<<endl;
    }else{
        cout<<"less"<<endl;
    }

    if(firstArray<secondArray){
        cout<<"less"<<endl;
    }else{
        cout<<"more"<<endl;
    }


    Square firstSquare(1.0, 11.0, 5, 31);
    Square secondSquare(5.7, 19.4, 9, 45);

    if(firstSquare==secondSquare){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }


    if(firstSquare!=secondSquare){
        cout<<"not equal"<<endl;
    }else{
        cout<<"equal"<<endl;
    }

    if(firstSquare>secondSquare){
        cout<<"more"<<endl;
    }else{
        cout<<"less"<<endl;
    }

    if(firstSquare<secondSquare){
        cout<<"less"<<endl;
    }else{
        cout<<"more"<<endl;
    }

    firstSquare.squareShow();
    firstSquare.squareMultiply(7);
    firstSquare.squareMove(12.3, 17.9);
    firstSquare.squareShow();
    return 0;
}