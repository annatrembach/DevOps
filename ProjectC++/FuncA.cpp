#include "FuncA.h"
#include <cmath>

double FuncA::calculate(int n) {
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += (std::pow(2*i+1, -1)) * std::pow(2*i+1, (2*i+1));
    }
    return sum;
}
