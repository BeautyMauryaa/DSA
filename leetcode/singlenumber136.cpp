#include <iostream>
#include <vector>
using namespace std;

int singlenum(vector<int> &nums)
{
    int ans = 0;
    for (int num : nums)
    {
        ans = ans ^ num;
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 2, 1, 4, 2};
    cout << singlenum(nums);
}

// time complexity=O(n);
// space complexity=O(1);