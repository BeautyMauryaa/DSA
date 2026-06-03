#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int temp = x;
    long long rev = 0;
    while (rev > 0)
    {
        int digit = x % 10;     // get the last digit
        rev = rev * 10 + digit; // add the last digit to rev
        x = x / 10;             // remove the last digit from x
    }
    return temp == rev;
}

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}

