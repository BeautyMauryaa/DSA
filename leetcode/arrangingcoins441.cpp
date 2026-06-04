#include <iostream>
#include <vector>
using namespace std;
int arrangingCoins(int n){
    int row=1;
    while(n>=row){
        n-=row;
        row++;
    }
    return row-1;
}

int main(){
    int n;
    cin>>n;
    cout<<arrangingCoins(n);
}