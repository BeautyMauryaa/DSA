//function: reusable block of code that perform a specific task and can be called multiple times in a program.
//recursion: functions that call themselves directly or indirectly to solve a problem by breaking it down into smaller parts and solving each part recursively.


//#include<bits/stdc++.h>
//function: 
// #include<iostream>
// using namespace std;
// int sum(int a,int b){// int=return type ,sum=name of function ,a and b=parameters 
//     return a+b;//return statement = value that is returned by the function
// }
// int main(){
//   int a;
//   cin>>a;
//   int b;
//   cin>>b;
//   cout<<sum(a,b)<<endl;
//   return 0;
// }


//1.Pass by value and pass by reference:
#include <iostream>
using namespace std;
 
void Addten(int x){
 x=x+10;
 cout<<"inside value fun: "<<x<<endl;
}

void Addtenref(int& x){
  x=x+10;
  cout<<"inside ref fun: "<<x<<endl;
}

int main(){
  int x;
  cout<<"enter the value of x: ";
  cin>>x;

  Addten(x);
  cout<<"after value call: "<<x<<endl;

  Addtenref(x);
  cout<<"after ref call: "<<x<<endl;

  return 0;
}
