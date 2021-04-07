#include <iostream>
#include <cmath>
#include <vector>

struct SPoint {
    double x;
    double y;

};

class IGeoFig {
public:
    virtual double square() = 0;

    virtual double perimeter() = 0;
};

class CVector2D {
public:
    double x, y;

};

class IPhysObject {
public:
    virtual double mass() const = 0;

    virtual CVector2D position() = 0;

    virtual bool operator==(const IPhysObject &ob) const = 0;

    virtual bool operator<(const IPhysObject &ob) const = 0;

};

class IPrintable {
public:
    virtual void draw() = 0;
};

class IDialogInitiable {
    virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
    virtual const char *classname() = 0;

    virtual unsigned int size() = 0;
};

class CFigure
        : public IGeoFig,
          public CVector2D,
          public IPhysObject,
          public IPrintable,
          public IDialogInitiable,
          public BaseCObject {
};


class CCircle : public CFigure {
private:
    SPoint centre;
    double radius = 0;
    double circleMass = 0;
public:
    void initFromDialog() override {
        printf("Input centre, radius and circleMass\n");
        std::cin >> centre.x >> centre.y >> radius >> circleMass;
    }

    CCircle(CCircle &other) {
        *this = other;
    }

    void operator=(const CCircle &other) {
        this->centre = other.centre;
        this->radius = other.radius;
        this->circleMass = other.circleMass;
    }

    CCircle() {
        this->centre.x = 0;
        this->centre.y = 0;
        this->radius = 0;
        this->circleMass = 0;
    }

    CCircle(SPoint otherCentre, double otherRadius, double otherMass) {
        this->centre = otherCentre;
        this->radius = otherRadius;
        this->circleMass = otherMass;
    }

    double mass() const override {
        return this->circleMass;
    }

    CVector2D position() override {
        CVector2D position;
        position.x = this->centre.x;
        position.y = this->centre.y;
        return position;
    }

    bool operator==(const IPhysObject &ob) const override {
        return this->mass() == ob.mass();
    }

    bool operator<(const IPhysObject &ob) const override {
        return (this->mass() < ob.mass());
    }

    const char *classname() override {
        return "Circle\n";
    }

    unsigned size() override {
        return sizeof(CCircle);
    }

    double perimeter() override {
        return (2 * M_PI * this->radius);
    }

    double square() override {
        return (M_PI * pow(this->radius, 2));
    }

    void draw() override {
        std::cout << "\n---Circle---\n";
        printf("Centre:\n(%f, %f);\nRadius: %f;\nMass: %f\n", this->centre.x, this->centre.y, this->radius,
               this->circleMass);
    }
};

class CRectangle : public CFigure {
private:
    SPoint point1;
    SPoint point2;
    SPoint point3;
    SPoint point4;
    double mass1 = 0;
    double mass2 = 0;
    double mass3 = 0;
    double mass4 = 0;

    double getDistance(SPoint firstPoint, SPoint secondPoint) const {
        return std::sqrt(std::pow(secondPoint.x - firstPoint.x, 2) + std::pow(secondPoint.y - firstPoint.y, 2));
    }

public:
    CRectangle() {
        point1 = {0, 0};
        mass1 = 0;
        point2 = {0, 0};
        mass2 = 0;
        point3 = {0, 0};
        mass3 = 0;
        point4 = {0, 0};
        mass4 = 0;
    }

    CRectangle(CRectangle &other) {
        *this = other;
    }

    void operator=(const CRectangle &other) {
        this->point1 = other.point1;
        this->point2 = other.point2;
        this->point3 = other.point3;
        this->point4 = other.point4;
        this->mass1 = other.mass1;
        this->mass2 = other.mass2;
        this->mass3 = other.mass3;
        this->mass4 = other.mass4;
    }

    double mass() const override {
        return (this->mass1 + this->mass2 + this->mass3 + this->mass4);
    }

    CVector2D position() override {
        CVector2D position;
        position.x = (this->point1.x + this->point2.x + this->point3.x + this->point4.x) / 4;
        position.y = (this->point1.y + this->point2.y + this->point3.y + this->point4.y) / 4;
        return position;
    }

    bool operator==(const IPhysObject &ob) const override {
        return mass() == ob.mass();
    }

    bool operator<(const IPhysObject &ob) const override {
        return (this->mass() < ob.mass());
    }

    const char *classname() override {
        return "Rectangle!\n";
    }

    unsigned size() override {
        return sizeof(CRectangle);
    }

    void initFromDialog() override {
        printf("Input 4 points and their mass:\n");
        std::cin >> this->point1.x >> this->point1.y;
        std::cin >> this->mass1;
        std::cin >> this->point2.x >> this->point2.y;
        std::cin >> this->mass2;
        std::cin >> this->point3.x >> this->point3.y;
        std::cin >> this->mass3;
        std::cin >> this->point4.x >> this->point4.y;
        std::cin >> this->mass4;
    }

    double perimeter() override {
        double perimeter = 0;
        perimeter = getDistance(this->point1, this->point2) + getDistance(this->point2, this->point3) +
                    getDistance(this->point3, this->point4) + getDistance(this->point4, this->point1);
        return perimeter;
    }

    double square() override {
        double a = getDistance(point1, point2);
        double b = getDistance(point1, point3);
        return (a * b);
    }

    void draw() override {
        printf("\n---Rectangle---\n");
        printf("Points:\n(%f, %f) %f;\n (%f, %f) %f;\n (%f, %f) %f;\n (%f, %f) %f;\n", this->point1.x, this->point1.y,
               this->mass1,
               this->point2.x, this->point2.y, this->mass2, this->point3.x, this->point3.y, this->mass3,
               this->point4.x, this->point4.y, this->mass4);
        printf("Mass:%lf\n\n", mass());
    }
};

void printCommands() {
    printf("1: Add figure\n2: Print all figures\n3: Sum squares\n4: Sum perimeters\n"
           "5: Print centre of mass\n6: Memory\n7: Sort\n0: Exit\n");
}

int main() {
    std::vector<CFigure *> Figures;
    int task = 0;
    while (true) {
        printCommands();
        std::cin >> task;
        switch (task) {
            case 1:
                printf("1: Circle\n2: Rectangle\n");
                int x;
                std::cin >> x;
                if (x == 1) {
                    CCircle *tmp = new CCircle();
                    tmp->initFromDialog();
                    Figures.push_back(tmp);
                } else {
                    CRectangle *tmp = new CRectangle;
                    tmp->initFromDialog();
                    Figures.push_back(tmp);
                }
                break;
            case 2: {
                std::cout << std::endl;
                for (int i = 0; i < Figures.size(); i++) {
                    printf("%d: ", i + 1);
                    Figures[i]->draw();
                }
                std::cout << std::endl;
                break;
            }
            case 3: {
                double sum = 0;
                for (int i = 0; i < Figures.size(); i++) {
                    sum += Figures[i]->square();
                }
                std::cout << sum << std::endl;
                break;
            }
            case 4: {
                double sum = 0;
                for (int i = 0; i < Figures.size(); i++) {
                    sum += Figures[i]->perimeter();
                }
                std::cout << sum << std::endl;
                break;
            }
            case 5: {
                double x = 0;
                double y = 0;
                double tmpMass = 0;
                for (int i = 0; i < Figures.size(); i++) {
                    x += Figures[i]->position().x * Figures[i]->mass();
                    y += Figures[i]->position().y * Figures[i]->mass();
                    tmpMass += Figures[i]->mass();
                }
                std::cout << x / tmpMass << " " << y / tmpMass << std::endl;
                break;
            }
            case 6: {
                double sum = 0;
                for (int i = 0; i < Figures.size(); i++) {
                    sum += Figures[i]->size();
                }
                std::cout << sum << std::endl;
                break;
            }
            case 7: {
                for (int i = 0; i < Figures.size(); i++) {
                    for (int j = i+1; j < Figures.size(); j++) {
                        if ((Figures[i]->classname() == Figures[j]->classname()) && (Figures[j] < Figures[i])) {
                            CFigure *tmp = Figures[i];
                            Figures[i] = Figures[j];
                            Figures[j] = tmp;
                        }
                    }
                }
                break;
            }
            default:
                std::cout << "Goodbye!" << std::endl;
                exit(0);
        }
    }
}