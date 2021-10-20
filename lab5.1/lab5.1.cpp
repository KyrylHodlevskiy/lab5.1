// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double r = (pow(k(1 + p, q * q), 2) - k(q * p, 1)) / (1 + k(p * p, q));
	cout << "r = " << r << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return (sin(x) / pow(y, 2)) + ((cos(y) / pow(x, 2)));
}