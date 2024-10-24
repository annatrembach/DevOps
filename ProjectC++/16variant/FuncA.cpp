#include "funcA.h"

<<<<<<< Updated upstream
double FuncA::calculate() {
    double result = 0;
    double x = 1; 
    result += x - (pow(x, 3) / 6) + (3 * pow(x, 5) / 40);
=======
double FuncA::calculate(int n) {
    double result = 0;
    double x = 1; 
    for (int i = 0; i < n; ++i) {
        result += (pow(-1, i) * (2 * i)!) / (pow(4, i) * pow(i!, 2) * (2 * i + 1)) * pow(x,2 * i + 1);
    }
>>>>>>> Stashed changes
    return result;
}

