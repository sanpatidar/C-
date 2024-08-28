#include<bits/stdc++.h>
using namespace std;

class sample
{
    int a, b;
    public:
    void setvalue()
    {
        a = 10; b = 20;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend float mean(sample ob);
};

float mean(sample ob)
{
    float avg;
    avg = (ob.a+ob.b)/2;
    return avg;
}


int main(){

    float result;
    sample ob;
    ob.setvalue();
    result = mean(ob);
    cout<<"Average = "<<result;
    return 0;
}