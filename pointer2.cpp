#include<bits/stdc++.h>
using namespace std;

class M
{
    public:
    int x;
    int y;
    void set_xy(int a, int b)
    {
        x = a;  y = b;
    }
};

int main(){
    M ob;
    ob.set_xy(10,20);
    int M::*px=&M::x;
    int M::*py=&M::y;
    M *p=&ob;
    int s1 = ob.*px + ob.*py;
    int s2 = p->*px + p->*py;
    cout<<s1<<" "<<s2;
    return 0;
}