#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Matrix::SetRow( int value)
{
	rowNo = value;
}
void Matrix::SetCol( int value)
{
	colNo = value;
}
bool Matrix::Init(int x, int y)
{
	rowNo = x;
	colNo = y;
	matrix = new float* [x];
	for (int i = 0; i < x; i++)
		matrix[i] = new float[y];

	return true;
}

void Matrix::Create()
{
	for ( int i = 0; i < rowNo; i++)
		for (int j = 0; j < colNo; j++)
			matrix[i][j] = -33 + rand() % (20 + 33 + 1);
}

void Matrix::Display() const
{
	cout << endl;
	for (int i = 0; i < rowNo; i++)
	{
		for (int j = 0; j < colNo; j++)
			cout << setw(4) << matrix[i][j];
		cout << endl;
	}
	cout << endl;

}
void Matrix::Read() //подумати
{
	int x, y;
	cout << "rowNo = ? ";
	cin >> x;
	do {
		cout << "colNo = ?";
		cin >> y;
	} while (!Init(x, y));
}
float Matrix::Min()
{
	float min = 0;
	for (int i = 0; i < rowNo; i++)
	{
		for (int j = 0; j < colNo; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
	return min;
}
float Matrix::Max()
{
	float max = 0;
	for (int i = 0; i < rowNo; i++)
	{
		for (int j = 0; j < colNo; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}
float Matrix::Sum(int i1,int i2, int j1,int  j2)
{
	float Sum = 0;

	Sum = matrix[i1][j1] + matrix[i2][j2];
	cout << "Sum = " << matrix[i1][j1] << " + " << matrix[i2][j2] << " = " << Sum;
	return Sum;
}