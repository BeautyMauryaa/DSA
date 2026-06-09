// An Armstrong Number is a number that is equal to the sum of its digits raised to the power of the number of digits.
// 153
// It has 3 digits:
// 1³ + 5³ + 3³
// = 1 + 125 + 27
// = 153

#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int original = n;
    int sum = 0;
    int digits = 0;

    int temp = n;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{

    int n;
    cin >> n;
    cout << (armstrong(n) ? "armstrong" : "not armstrong");
    return 0;
}