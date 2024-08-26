#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc,balance;
    static int total_customer;

    public:
    Customer(string name, int acc, int balance)
    {
        this->name = name;
        this->acc = acc;
        this->balance = balance;
        total_customer++;
    }

    void display()
    {
        cout<<name<<" "<<acc<<" "<<balance<<" "<<total_customer<<endl;
    }
};

int Customer::total_customer=0;

int main(){
    Customer A1("Sanskar", 1264, 16000);
    Customer A2("Aadarsh", 1462, 15000);
    A1.display();
    A2.display();
    return 0;
}