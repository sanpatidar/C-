//Structure
#include<iostream>
using namespace std;

struct Employee{
        int a;
        float b;
        char ch;
    };
    

int main(){
    struct Employee sans;
    sans.a = 10;
    sans.b = 12.90;
    sans.ch = 'S';
    cout<<"The value is "<<sans.a<<endl;
    cout<<"The value is "<<sans.b<<endl;
    cout<<"The value is "<<sans.ch;
    return 0;
}



//Union
#include<iostream>
using namespace std;

union Employee
    {
        int a;
        float b;
        char ch;
    };
    

int main(){
    union Employee m1;
    m1.a = 5;
    m1.b = 2.00;

    cout<<m1.b;
    return 0;
}



//  Enum
#include<iostream>
using namespace std;

int main(){
    enum Meal{ breakfast , lunch , dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner;
    
    return 0;
}