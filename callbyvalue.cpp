#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a = 10, b = 20;
    cout <<"Before Swapping: "<<endl;
    cout <<" a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout <<"After Swapping: "<<endl;
    cout <<" a = "<<a<<" b = "<<b<<endl;
}