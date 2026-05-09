// set-sorted (unique element only)
#include <bits/stdc++.h>
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

// multiset(sorted order but can contain duplicate)
void multisetdemo()
{

    multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(10);
    ms.insert(20);

    for (int x : ms)
        cout << x << " ";

    // count:
    cout << "count 10: " << ms.count(10);

    // erase
    cout << endl;
    ms.erase(ms.find(10));
    cout << "after removing: ";
    for (int x : ms)
        cout << x << " ";

    cout << endl;
    for (int x : ms)
        cout << x << " ";
}

// map-key-value pair container
// key(sorted unique) and values(can be anything)
// map<key,value>;
// map<string,key>;
// map<key,string>;
// map<string,string>;
void mapdemo()
{
     map<string,int> mp;
    //     {"rihu",6},
    //     {"swati",9},
    //     {"nishu",4},
    //     {"shruti",8},
    //     {'rihu',7}
    //  };

    // mp[key]=value(update)
    // mp.insert[{key,val}]=insert
    // mp.erase(key)
    // mp.find(key)-iterator
    // mp.count(key)-0 ya 1
    // mp.size()-size
    // mp.empty()-empty check
    // mp.at(key)-safe access

    // insert by using insert fucntion;
    mp["apple"] = 5;
    mp["banana"] = 3;
    mp["cherry"] = 8;
    mp["apple"] = 10; // update not duplicate

    cout << "Map: " << endl;


    //old way to traverse
    // for (auto p : mp)
    // {
    //     cout << p.first << "->" << p.second << "\n";
    // }

    //modern way(c++17)
    for(auto [key,val]:mp){
        cout<<key<<" "<<val;
    }

    // search

    if (mp.find("banana") != mp.end())
        cout << "banana found: " << mp["banana"] << "\n";

    // erase:
    mp.erase("banana");
    cout << "size after erase: " << mp.size() << "\n";
}


//multimap- one key-multiple value:
void multimapdemo(){
    multimap<string,int> mm;
    mm.insert({"rihu",90});
    mm.insert({"rihu",89});//same key allowed;
    mm.insert({"beauty",90});

    for(auto [key,val]:mm){
        cout<<key<<" "<<val<<"\n";
    }
}
int main()
{
    setques();
    multisetdemo();
    cout<<endl;
    cout<<"Map"<<endl;
    mapdemo();

    cout<<endl;
    cout<<"Multimap: "<<endl;
    multimapdemo();
    return 0;
}