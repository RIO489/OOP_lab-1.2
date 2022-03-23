#pragma once

using namespace std;

class Matrix
{
private:
	 unsigned int rowNo;
	 unsigned int colNo;
	float** matrix;
public:
	 int GetRow() const { return rowNo; }
	 int GetCol() const { return colNo; }
	void SetRow( int value);
	void SetCol( int value);

	bool Init( int x,  int y);
	void Display() const;
	void Read();

	void Create();
	float Min();
	float Max();
	float Sum(int i1, int i2, int j1, int  j2);
};
