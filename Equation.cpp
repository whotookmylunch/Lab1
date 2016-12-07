#include "Equation.h"
#include <iostream>

Equation::Equation(){

}

Equation::Equation(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}

void Equation::solve() {
    double x = X;
    double y = Y;
    double z = Z;

    C = (pow(2, pow(y, x))) + (pow(pow(3, x), y)) - ((y * (atan(z) - M_PI / 6)) / (fabs(x) + (1 / (pow(y, 2) + 1))));
}

void Equation::setData(double x, double y, double z) {
    X = x;
    Y = y;
    Z = z;
}

void Equation::setX(double X) {
    Equation::X = X;
}

double Equation::getX() const {
    return X;
}


void Equation::setY(double Y) {
    Equation::Y = Y;
}

double Equation::getY() const {
    return Y;
}

void Equation::setZ(double Z) {
    Equation::Z = Z;
}

double Equation::getZ() const {
    return Z;
}

double Equation::getC() const {
    return C;
}

void informationAlerts(Equation val) {
    std::cout << val << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Equation& obj) {
    std::cout << "X=\t" << obj.getX() << "\nY =\t" << obj.getY() << "\nZ =\t" << obj.getZ() << "\nC =\t" << obj.getC() << std::endl;
    return out;
}