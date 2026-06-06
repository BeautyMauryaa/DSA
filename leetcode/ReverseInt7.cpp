#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;
        while (x != 0)
        {
            int digit = x % 10;
            rev = rev * 10 + digit;
            if (rev > INT_MAX || rev < INT_MIN)
            {
                return 0;
            }
            x = x / 10;
        }
        return rev;
    }
};

int main()
{
    Solution obj;
    int x;
    cin >> x;
    cout << obj.reverse(x);
    return 0;
}