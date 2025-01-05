#include <iostream>
#include "funcA.h"

int main() {
    FuncA func;

    int n = 3;
    double x = 0.5;
    
    double result = func.compute(x, n);
    
    std::cout << "Calculated th(" << x << ") with " << n << " terms, result: " << result << std::endl;

    return 0;
}