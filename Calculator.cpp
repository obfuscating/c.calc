#include "Calculator.h"

double Calculator::Calculate(double x, char o, double y)
{
    switch (o)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case 'x':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}
