// There are two types of header files.
// 1. System header files: It comes with the compiles.
#include<iostream>
// 2. User defned header files: It is written by the programmer.
//#include "this.h" //--> This will produce an error if this.h is no present in the current directory
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Operators i C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    cout<<endl;
    //Arthmetic Operators
    cout<<"Following are the Arthmetic operators in C++:"<<endl;
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;
    
    //Assignment Operators  --> Used to assign values to variables
    // int a=3,b=9;
    // char c='s';

    //Comparison Operators
    cout<<"Following are the Comparison operators in C++:"<<endl;
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"Following are the Logical operators in C++:"<<endl;
    cout<<"The value of this logical and operator ((a==b)&&(a<b)) is: "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b)||(a<b)) is: "<<((a==b)||(a<b))<<endl;
    cout<<"The value of this logical and operator (!(a==b)) is: "<<(!(a==b))<<endl;
    
    cout<<endl;
    return 0;
}