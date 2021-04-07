//
// Created by Александр on 21.02.2020.
//

#ifndef INC_1_PROCEDURE_H
#define INC_1_PROCEDURE_H

#include <iostream>
#include <vector>

struct Circle{
    float x;
    float y;
};

struct Input{
    float firstTask;
    float secondTask;
    float x;
    float y;
    float xMove;
    float yMove;
    std::vector<std::vector<float>> array;
    int multiplyVariable;
    int action;
};

void numberWithoutFractional(float *firstTask);

void numberWithoutFractional(float &firstTask);

void changeSign(float *secondTask);

void changeSign(float &secondTask);

void moveCircle(Circle *circle, float *xMove, float *yMove);

void moveCircle(Circle &circle, float &yMoveX, float &yMoveY);

void multiplyByNumber(std::vector<std::vector<float>> *array, float multiplyVariable);

void multiplyByNumber(std::vector<std::vector<float>> &array, float multiplyVariable);

#endif //INC_1_PROCEDURE_H