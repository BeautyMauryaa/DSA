// it is technique where function call itself directly or indirectly to solve problem
//two parts of recursive function:
//1. Base case(the stopping condition) : it tells when to stop 
 // for ex: if(n==0) return ; without it function call itself  infinite times


//2. Recursive case: it tells what to do next
// the part where the funciton calls itself with a smaller problem
// for ex: return func(n-1); each call should move closer to the base case;
// so that eventually we reach the base case


//ex: print number 5 to 1
#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<n<<" ";
    print(n-1);
}


//without basecase:
void fun(){
    cout<<"hello";
    fun();
}
//runs forever until stack overflow because the function never stop calling itself

int main(){
    print(5);
    return 0;
}


