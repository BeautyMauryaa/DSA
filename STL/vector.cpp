// vector: kind of array but with dynamic size
// in normal array the size id fixed but in this the size is grow and shrink as per need
// we include vector in header file like this -> #include <vector> 
// vector<int> v; // this is a vector of integers
// vector<int> v(5); // this is a vector of integers with 5 elements



 #include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

// int main(){
//     vector<int> numb;
//     numb.push_back(1);
//     numb.push_back(4);
//     numb.push_back(9);
//     cout<<numb[0]<<" "<<numb[1]<<" "<<numb[2]<<endl;
//     return 0;
// }

void aboutvector(){

    vector<int> v; // empty vector
    vector<int> v1(5); // vector of size 5
    vector<int> v2(5, 2); // vector of size 5 with all elements initialized to 2

    vector<int> v3{1, 2, 3, 4, 5}; // vector of size 5 with elements 1, 2, 3, 4, 5
    vector<int> v4(v3); // vector of size 5 with elements 1, 2, 3, 4, 5

    vector<int> v5(v3.begin(), v3.end()); // vector of size 5 with elements 1, 2, 3, 4, 5

    vector<int> v6(v3, v3 + 3); // vector of size 3 with elements 1, 2, 3

    vector<int> v7(v3.begin() + 1, v3.end() - 1); // vector of size 3 with elements 2, 3, 4

    vector<int> v8 = v3; // vector of size 5 with elements 5, 4, 3, 2, 1
    std::reverse(v8.begin(), v8.end());

    vector<int> v9(v3.rbegin() + 1, v3.rend() - 1); // vector of size 3 with elements 4, 3, 2

    vector<int> v10(v3.begin(), v3.end()); // vector of size 5 with elements 1, 2, 3, 4, 5

}
int main(){
    aboutvector();
    return 0;
}