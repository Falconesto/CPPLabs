//
// Created by Александр on 21.02.2020.
//
#include <cmath>
#include "procedure.h"

void numberWithoutFractional(float *firstTask) {
    if (*firstTask > 0) {
        *firstTask = floor(*firstTask);
    } else {
        *firstTask = ceil(*firstTask);
    }
}

void numberWithoutFractional(float &firstTask) {
    if (firstTask > 0) {
        firstTask = floor(firstTask);
    } else {
        firstTask = ceil(firstTask);
    }
}

void changeSign(float *secondTask) {
    *secondTask = *secondTask * (-1);
}

void changeSign(float &firstTask) {
    firstTask = firstTask * (-1);
}

void moveCircle(Circle *circle, float *xMove, float *yMove) {
    circle->x = circle->x + *xMove;
    circle->y = circle->y + *yMove;
}

void moveCircle(Circle &circle, float &xMove, float &yMove) {
    circle.x = circle.x + xMove;
    circle.y = circle.y + yMove;
}
void multiplyByNumber(std::vector<std::vector<float>> *array, float multiplyVariable) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            (*array)[i][j] = (*array)[i][j] * multiplyVariable;
        }
    }
}

void multiplyByNumber(std::vector<std::vector<float>> &array, float multiplyVariable){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = array[i][j] * multiplyVariable;
        }
    }
}

