#include <iostream>
#include "Calculator.h"
#include <windows.h>
#include <tchar.h>

using namespace std;

int main()
{
    SetConsoleTitle(_T("Calculator"));

    double x = 0.0;
    double y = 0.0;
    double r = 0.0;
    char o = '+';

    Calculator c;
    while (true)
    {
        cin >> x >> o >> y;
        r = c.Calculate(x, o, y);
        cout << "Answer: " << r << endl;
    }

    return 0;
}
