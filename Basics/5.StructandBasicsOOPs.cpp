// //Struct: userdefined data type which allow us to group diff type of varibale under a single name:

// // struct name{
// //     //body
// // }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct person{//struct(only blueprint no memory allocation)
//     string name;
//     int age;
//     string gender;
// };

// // int main(){
// //     person p1;//object(memory allocation)
// //     p1.name="Subh";
// //     p1.age=20;
// //     p1.gender="Male";
// //     cout<<p1.name<<" "<<p1.age<<" "<<p1.gender<<endl;
// // }

// //we can decalre struct in main in 3 way:

// int main(){
//     person p1;
//     p1.name = "Subh";
//     p1.age = 20;
//     p1.gender = "Male";
//     cout << p1.name << " " << p1.age << " " << p1.gender << std::endl;

//     //way2: direct initialization
//     person p2{"Subh", 20, "Male"};
//     cout << p2.name << " " << p2.age << " " << p2.gender << std::endl;

//     //way:  Designated initialization (C++20)
//     person p3 {.name = "Subh", .age = 20, .gender = "Male"}; //order doesn't matter
//     cout << p3.name << " " << p3.age << " " << p3.gender << std::endl;

//     return 0;
// }

// 2.struct in function:
#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    float marks;
};

void print(student &s)
{
    s.marks = 80;
    cout << s.marks << endl;
}

void updateval(student &s)
{
    s.marks = 100;
    cout << s.marks << endl;
}

// return struct
student createstudent(string name, int age, float marks)
{
    student s;
    s.name = name;
    s.age = age;
    s.marks = marks;
    return s;
};

int main()
{
    student s1 = {"Subh", 20, 90};
    print(s1); // only copy value pass by value
    cout << s1.marks << endl;
    updateval(s1); // orignal value change - pass by ref
    cout << s1.marks << endl;

    student s2 = createstudent("Subh", 20, 90);
    cout << s2.name << " " << s2.age << " " << s2.marks << endl;
    return 0;
}