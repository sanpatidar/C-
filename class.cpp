//Static way to represent class 
#include<iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1){
            a=a1;
            b=b1;
            c=c1;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            
        }
        // void getData(){
        //     cout<<"The value of a is "<<a<<endl;
        //     cout<<"The value of b is "<<b<<endl;
        //     cout<<"The value of c is "<<c<<endl;
        //     cout<<"The value of d is "<<d<<endl;
        //     cout<<"The value of e is "<<e<<endl;
        // }
};

int main(){
    Employee sanskar;
    sanskar.d=23;
    sanskar.e=45;
    sanskar.setData(26,89,54);
    // sanskar.getData();
    return 0;
}



// #include<iostream>
// using namespace std;
// class Employee
// {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
    
//     void setData(int a1){
//         a = a1;
//     }
//     void getData(){
//         cout << a << endl;
//     }

// };

// int main(){
//     Employee emp;
//     int n;
//     cin >> n;

//     emp.setData(n);
//     emp.getData();
    
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//         char name[30];
//         int rollno;
//     public:
//         void getData()
//         {
//             cout<<"Enter Name: ";
//             cin>>name;
//             cout<<"Enter Rollno: ";
//             cin>>rollno;
            
//         }
//         void display()
//         {
//             cout<<"Enter Name: "<<name<<endl;
//             cout<<"Enter Rollno: "<<rollno;
//         }
        
// };


// int main()
// {
//     Student ob1,ob2;
//     ob1.getData();
//     ob2.getData();
//     ob1.display();
//     ob2.display();
//     return 0;
// }



