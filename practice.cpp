#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int f(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return 4 * pow(x, 4) + 8 * pow(x, 3) + x + 2;
    }
}

double g(double x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return sqrt(x);
    }
}

int sum(double n)
{
    int partialSum = 0;

    for (int i = 1; i <= n; ++i)
    {
        partialSum += pow(i, 3);
    }
    return partialSum;
}

/*
int a[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0 ; i < size(a); i++)
    {
        cout << f(i) << endl;
    }
*/

int main()
{
    vector<int> numbers;
    int value, n;

    cout << "How many values to square root?" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter an integer: ";
        cin >> value;
        numbers.push_back(value);
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << sqrt(numbers[i]) << endl;
    }

    return 0;
}