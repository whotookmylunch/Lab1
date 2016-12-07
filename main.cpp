#include "Equation.h"
#include <iostream>

int main() {

    Equation a;
    a.setX(3.251);
    a.setY(0.325);
    a.setZ(0.466 * pow(10, -4));
    a.solve();
    std::cout << "C = " << a.getC() << std::endl;

    informationAlerts(a);

    return 0;
}