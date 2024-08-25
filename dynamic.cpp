//Dynamic way to represent class
#include<iostream>
using namespace std;
class Employee
{
    public:
        int d,e;
        
};

int main(){
    Employee *S = new Student;
    (*S).d=23;
    (*S).e=45;
    cout<<S->d<<" "<<endl;
    cout<<S->e<<" ";
    return 0;
}