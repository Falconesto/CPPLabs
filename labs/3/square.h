//
// Created by Александр on 20.03.2020.
//

#ifndef INC_3_SQUARE_H
#define INC_3_SQUARE_H


class Square{
public:
    double vertexX;
    double vertexY;
    double side;
    double angle;

    Square(double, double, double, double);

    void squareMultiply(double x);
    void squareMove(double x, double y);
    void squareShow();

    bool operator==(const Square&);
    bool operator!=(const Square&);
    bool operator>(const Square&);
    bool operator<(const Square&);
};

#endif //INC_3_SQUARE_H
