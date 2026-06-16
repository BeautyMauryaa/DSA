#include <iostream>
using namespace std;
bool strpalindrome(string a)
{
    int left = 0;
    int right = a.length();
    while (left < right)
    {
        if (a[left] != a[right])
        {
            return false;
        }
        left++;
        right--;
    }
}

int main()
{
    string a = "hannah";
    cout << strpalindrome(a);
    return 0;
}