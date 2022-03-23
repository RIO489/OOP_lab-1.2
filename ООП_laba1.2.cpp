#include "Matrix.h"
#include <iostream>
using namespace std;
int main()
{
    Matrix z;
    unsigned int rowNo;
    unsigned int colNo;
    int i1, i2, j1, j2;
    cout << "Row = ";
    cin >> rowNo;
    cout << "Col = ";
    cin >> colNo;
    z.Init(rowNo, colNo);
    z.Create();
    z.Display();
    cout << "Min =" << z.Min() << endl;
    cout << "Max =" << z.Max() << endl;
    cout << "i1 = ";
    cin >> i1; cout << endl;
    cout << "j1 = ";
    cin >> j1; cout << endl;
    cout << "i2 = ";
    cin >> i2; cout << endl;
    cout << "j2 = ";
    cin >> j2; cout << endl;
    z.Sum(i1,i2,j1,j2);
    return 0;
}

