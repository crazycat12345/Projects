
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

/*
quadratic solver for values a,b,c
ax^2 + bx + c = 0
*/

void quadratic(double a, double b, double c)
{
    if (a == 0)
    {
        cout << "This is not a quadratic equation." << endl;
        return;
    }

    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Two real roots: " << x1 << " and " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);

        cout << "One real root: " << x << endl;
    }
    else
    {
        cout << "No real roots, only complex roots." << endl;
    }
}

int main()
{
    double a, b, c;

    cout << "Enter value for 'a': ";
    cin >> a;

    cout << "Enter value for 'b': ";
    cin >> b;

    cout << "Enter value for 'c': ";
    cin >> c;

    quadratic(a, b, c);

    return 0;
}
