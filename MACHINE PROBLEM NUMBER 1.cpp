#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	for (;;) {
		double a, b, c;
		cout << "Below please enter the sides of the triangle to compute for it's values. " << endl;
		cout << "Please enter side A: ";
		cin >> a;
		cout << "Please enter side B: ";
		cin >> b;
		cout << "Please enter side C: ";
		cin >> c;
		cout << endl;

		double d, e, f, A, B, C;
		double cons = 180 / M_PI;
		d = (b*b+c*c-a*a)/(2*b*c);
		A = acos(d)*cons;
		cout << "The internal angle of side A: " << A << endl;

		e = (c*c+a*a-b*b)/(2*c*a);
		B = acos(e)*cons;
		cout << "The internal angle of side B: " << B << endl;

		f = (a*a+b*b-c*c)/(2*a*b);
		C = acos(f)*cons;
		cout << "The internal angle of side C: " << C << endl;
		cout << endl;
		if (a == b && b == c)
		{
			cout << "The triangle is an equilateral triangle." << endl;
		}
		else if (a == b || b == c || c == a)
		{
			cout << "The triangle is an isosceles triangle." << endl;
		}
		else if (a != b && b != c && c != a)
		{
			cout << "The triangle is a scalene triangle." << endl;
		}
		cout << endl;

		double perimeter = (a+b+c);
		double p = perimeter / 2;
		double area = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "The area pf the triangle is: " << area << endl;
		cout << "The perimeter of the triangle is: " << perimeter << endl;
		cout << endl;
		if (A >= 90 || B >= 90 || C >= 90)
		{
			cout << "The triangle is an obtuse triangle." << endl;
		}
		else if (A == 90 || B == 90 || C == 90)
		{
			cout << "The triangle is a right triangle." << endl;
		}
		else if (A <= 90 || B <= 90 || C <= 90)
		{
			cout << "The triangle is an acute triangle." << endl;
		}
		cout << endl;
		if (a == b && b == c)
		{
			double apothem;
			apothem = (a)/(2*tan(180/3));
			cout << "The length of apothem: " << apothem << endl;
		}
		else
		cout << "Triangle must be equilateral for apothem to be calculated." << endl;
		double circumcenter = (a*b*c)/(4*area);
		cout << "The length of circumcenter: " << circumcenter << endl;
		cout << endl;
		string answer;
		cout << "Do you still want to compute for another triangle? ";
		cin >> answer;
		cout << endl;
		if (answer[0] == 'y' || answer[0] == 'Y')
		continue;
		else
		break;
	}
	_getch();
	return 0;
}