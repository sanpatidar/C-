//Product of digits of a given number 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int Product = 1;
    while(n!=0){
        int ld = n % 10;
        n = n / 10;
        Product = Product * ld;
    }
    cout<<Product;
    return 0;
}