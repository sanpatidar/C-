#include<iostream>
using namespace std;
int c=45; //global variable value
int main(){
    // ********** Builds in Data types **********
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is: "<<::c; //we can excess global value by this method 
    // cout<<endl;

    // ********** float, double and long double Literals **********
    // float d=34.4F;
    // long double e=34.4L;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e;


    // ********** Reference Variables **********
    // Sanskar ----> Kisan ----> Anti Chal ----> Coder
    // float x=455;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    
    // ********** Typecasting **********
    int a=45;
    float b=45.4;
    cout<<"The value of a is: "<<float(a)<<endl; // 1.
    cout<<"The value of a is: "<<float(a)<<endl; // 2. --->This two lines are same 

    cout<<"The value of b is: "<<int(b)<<endl; // 1.
    cout<<"The value of b is: "<<int(b)<<endl; // 2. --->This two lines are same 
    int c=int(b);

    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    cout<<"The expression is: "<<a+(int)b<<endl;
    


    return 0;
}