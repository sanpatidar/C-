//Call by reference
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    int &c = a;
    c = 100;
    cout << a << endl;
    cout << b << endl;
}
