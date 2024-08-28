#include<bits/stdc++.h>
using namespace std;

int sum(int x, int y){
    return x+y;
}

double sum(double x, double y){
    return x+y;
}

int sum(int x, int y, int z){
    return x+y+z;
}

void sum(char x, char y){
    cout<<x<<" "<<y<<endl;
}



int main(){
    cout<<sum(5,3)<<endl;
    cout<<sum(1.2,2.8)<<endl;
    cout<<sum(21,10,9)<<endl;
    sum('A','B');
    return 0;
}