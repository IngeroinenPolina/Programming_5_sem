// 1 - Реализация класса Triangle.cpp 

#include <iostream>
#include "triangle.h"
#include "dot.h"

using namespace std;

int main()
{
	double x, y;
	cout << "dot1 (x, y): ";
	cin >> x >> y;
	Dot dot1 = Dot(x, y);

	cout << "dot2 (x, y): ";
	cin >> x >> y;
	Dot dot2 = Dot(x, y);

	cout << "dot3 (x, y): ";
	cin >> x >> y;
	Dot dot3 = Dot(x, y);

	Triangle T = Triangle(&dot1, &dot2, &dot3);

	double perimeter = T.get_perimeter();
	double square = T.get_sqrt();

	T.show();
	cout << "P = " << perimeter << ", S = " << square << endl;

}