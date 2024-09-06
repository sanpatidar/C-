#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    int i,j,min = abs(arr[0]-arr[1]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(abs(arr[i]-arr[j])<min) min = abs(arr[i]-arr[j]);
        }
        
    }
    cout<<min;
    return 0;
}