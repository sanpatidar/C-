#include<bits/stdc++.h>
using namespace std;

class XYZ;

class ABC{
    int a;
    public: 
        void setvalue(int value){
            a = value;
        }
        void display(){
            cout<<"a= "<<a<<endl;
        }
        friend void sum(ABC ob1, XYZ ob2);
};

class XYZ{
    int x;
    public: 
        void setvalue(int value){
            x = value;
        }
        void display(){
            cout<<"x= "<<x<<endl;
        }
        friend void sum(ABC ob1, XYZ ob2);
};


void sum(ABC ob1,XYZ ob2)
{
    int sum;
    sum = (ob1.a + ob2.x);
    cout<<sum;
}


int main(){

    ABC ob1;
    XYZ ob2;
    ob1.setvalue(10);
    ob2.setvalue(20);

    sum(ob1,ob2);
    return 0;
}