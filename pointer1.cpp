#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] ={10,20,30,40,50};
    int *p;
    p = &a[0];

    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<p+2<<endl;
    cout<<p+3<<endl;
    cout<<p+4<<endl;
    cout<<endl;

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    
    return 0;
}