#include "funcA.h"

double FuncA::calculate() {
    double result = 0;
    double x = 1; 
    result += x - (pow(x, 3) / 6) + (3 * pow(x, 5) / 40);
    return result;
}

