//prefix - we pre-compute compulative sum once and then answer any range sum query in O(1) instead of O(n);
//comulative sum means sum of all element till that index


//formula: prefix[0]=arr[0]
// prefix[i]= prefix[i-1]+prefix[i] for i>=1;



#include <iostream>
using namespace std;

int main(){
    vector<int> arr={2,5,1,8,3,4};
    int n=arr.size();
    vector<int> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }


    //sum from index 1 to 4
    int start=1;
    int end=4;
    int sum;
    if(start==0){
        sum=prefix[end];
    }
    else{
        sum=prefix[end]-prefix[start-1];
    }
    cout<<sum<<"\n";
    return 0;
}