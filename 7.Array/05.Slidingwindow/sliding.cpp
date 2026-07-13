//it is optimize technique where we maintain information about continous part of an array or string and move that window one step at a time instead of reclaculating everything from scratch
// it is basically the smarter version of  two pointer
// in this both pointer left and right will move in same direction instead of opposite


//why sliding window exist?
//suppose arr=[2,1,5,1,3,2];
//we have to find maximum sum of subarray of size k, we can use two pointer but it will take O(n) time, we can use sliding window which will take O(k) time

//what are the subarray of size 3:
// 2,1,5
// 1,5,1
// 5,1,3
// 1,3,2

//so instaed of checking every subarray we can use sliding window:


//formula: 
// Current sum= previous sum-outgoing element + incoming element 


#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& arr,int k){
    int n=arr.size();


    //step1: calculate the sum of the first window
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }


    int maxsum=windowsum;
    //step 2: slide the window
    for(int i=k;i<n;i++){
        windowsum=windowsum-arr[i-k]+arr[i];
        maxsum=max(windowsum,maxsum);
    }
    return maxsum;
}


int main(){
    vector<int> arr={2,1,5,1,3,2};
    int k=3;
    cout<<maxSum(arr,k);
    return 0;
}