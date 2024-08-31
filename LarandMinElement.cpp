//Find Largest element 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,5,3,8,6};
    int largest = INT_MIN;
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
    return 0;
}


//Find Minimun Element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,5,3,8,6};
    int largest = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<largest){
            largest=arr[i];
        }
    }
    cout<<largest;
    return 0;
}