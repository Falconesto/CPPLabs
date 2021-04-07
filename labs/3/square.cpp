//
// Created by Александр on 20.03.2020.
//

#include "square.h"
#include <iostream>

using namespace std;

Square::Square(double vertexX, double vertexY, double side, double angle) {
    this->vertexX=vertexX;
    this->vertexY=vertexY;
    this->side=side;
    this->angle=angle;
}

void Square::squareMultiply(double x){
    this->side*=x;
};

void Square::squareMove(double x, double y) {
    this->vertexX+=x;
    this->vertexY+=y;
}

void Square::squareShow() {
    cout<< "Square detail:" << endl << " (" << this->vertexX << ", " << this->vertexY << ")" << endl;
    cout << "Side: " << this->side << endl;
    cout << "Angle: " << this->angle << endl;
}

bool Square::operator==(const Square& secondSquare) {
    return this->side == secondSquare.side;
}

bool Square::operator!=(const Square& secondSquare) {
    return this->side != secondSquare.side;
}

bool Square::operator>(const Square& secondSquare) {
    return this->side > secondSquare.side;
}

bool Square::operator<(const Square& secondSquare) {
    return this->side < secondSquare.side;
}