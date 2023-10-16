/// Bisection
#include<bits/stdc++.h>
using namespace std;
int cc = 10;
double func(double x)
{
	return x*x*x + 2*x*x - x + 8;
}

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "a and B is not correct input \n";
		return;
	}

	double c = a;
	while (cc--)/// (b-a) < error
	{

		c = (a+b)/2;

		if (func(c) == 0.0)break;
		else if (func(c)*func(a) < 0)b = c;
		else a = c;
	}
	cout << "The value of root is : " << c;
}

int main()
{
	double a =-4, b = 4;
	bisection(a, b);
	return 0;
}

/// False
#include<bits/stdc++.h>
using namespace std;
int cc = 10;

double func(double x) {
    return x*x*x + 2*x*x - x + 8;
}

void falsePosition(double a, double b) {
    if (func(a) * func(b) >= 0) {
        cout << "a and b are not correct inputs" << endl;
        return;
    }

    double c = a;
    while (cc--) {

         c = (a*func(b) - b*func(a))/ (func(b) - func(a));

        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)b = c;
        else a = c;
    }
    cout << "The value of the root is: " << c;
}

int main() {
    double a = -4, b = 4;
    falsePosition(a, b);
    return 0;
}

/// Secand
#include <bits/stdc++.h>
using namespace std;
#define error 0.09
double func(double x)
{
    return exp(-x) -x;
}
double secant(double x0, double x1)
{
    int i = 0;
    double x2, f0, f1, f2;

    while (i < 10)
    {
        f0 = func(x0);
        f1 = func(x1);

        if (abs(f1 - f0) < error) return x1;

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);

        x0 = x1;
        x1 = x2;

        i++;
    }

    cout << "Method did not converge!" << endl;
    return x1;
}

int main()
{
    double x0 = 0, x1 = 1;
    double root = secant(x0, x1);
    cout << "The value of root is: " << root << endl;

    return 0;
}
/// Trafizoidal
#include<bits/stdc++.h>
using namespace std;

float y(float x)
{
	return 1/(1+x*x);
}

float trapezoidal(float a, float b, float n)
{
	// Grid spacing
	float h = (b-a)/n;
	float hh = (b-a)/(2*n);

	// Computing sum of first and last terms
	// in above formula
	float s = y(a)+y(b);

	// Adding middle terms in above formula
	for (int i = 1; i < n; i++)
		s += 2*y(a+i*h);

	// h/2 indicates (b-a)/2n. Multiplying h/2
	// with s.
	return hh*s;
}

int main()
{
	float x0 = 0;
	float xn = 1;
	int n = 6;

	cout << trapezoidal(x0, xn, n);
	return 0;
}