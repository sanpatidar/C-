#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,*p,**q;
    a = 10; p = &a; q = &p;
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<&q<<endl;
    cout<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}