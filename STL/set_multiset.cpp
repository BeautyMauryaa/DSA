// set-sorted (unique element only)
#include<bits/stdc++.h>
using namespace std;
void setdemo()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(0);
    s.insert(7);
    s.insert(8);
    s.insert(3);
}

void setques()
{
    set<int> s1 = {5, 3, 8, 1, 3, 7, 1};
    cout << "Set: ";
    for (int x : s1)
        cout << x << " ";

    if (s1.find(3) != s1.end())
        cout << "\n3 found!";
    else
        cout << "\n3 not found";

    // erase:
    s1.erase(8);
    cout << "\n after erase 8";
    for (int x : s1)
        cout << x << " ";

    auto it = s1.lower_bound(5);
    cout << "\n Lower bound of 5: " << *it;

    auto it2 = s1.upper_bound(5);
    cout << "\nUpper bound of 5: " << *it2;
}


void multisetdemo(){
    
 multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(10);
    ms.insert(20);

    for(int x:ms)
        cout<<x<<" ";
}


int main()
{
    setques();
    multisetdemo();
    return 0;
}