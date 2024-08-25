# include<iostream>
# include<math.h>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y,z)); 
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    
}
int main(){  
    int x, y, z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorian Triplate";
    }
    else{
        cout<<"Not Pythagorian Triplate";
    }
    return 0;

    }