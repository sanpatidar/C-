#include<bits/stdc++.h>
using namespace std;

class sample
{
    int a,b;
    public:
    void getdata(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};


int main(){
    sample ob1;
    ob1.getdata(10,20);

    sample ob2;
    ob2.getdata(30,40);

    ob1.display();
    ob2.display();
    return 0;
}
