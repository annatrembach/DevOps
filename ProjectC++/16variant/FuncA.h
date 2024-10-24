#ifndef FUNCA_H
#define FUNCA_H

class FuncA {
public:
    double FuncA::calculate(int n) {
    double result = 0;
    double x = 1;  
    for (int i = 0; i < n; ++i) {
        result += (pow(-1, i) * (2 * i)!) / (pow(4, i) * pow(i!, 2) * (2 * i + 1)) * pow(x, 2 * i + 1);
    }
    return result;
}
};

#endif 

