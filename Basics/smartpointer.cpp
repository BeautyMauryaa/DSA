// a class that behaves like a pointer but automatically manages memory
// it automatically destroy memory when no longer needed
//we have three types of smart pointer:
//1.unique_ptr(unique one owner only  )
#include<iostream>
#include<memory>
using namespace std;

void uni_ptr(){
    unique_ptr<int> ptr=make_unique<int>(10);
    cout<<*ptr;
    cout<<*ptr;
}

int main(){
    uni_ptr();
    return 0;
}
//2.shared_ptr
//3.weak_ptr