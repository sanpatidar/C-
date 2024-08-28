
#include<bits/stdc++.h>
using namespace std;

int x = 10;

int main()
{
    int x = 20;
    cout<<"Value of x is "<<::x;  //:: represent global value
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int x = 1, y = 2, z = 3;

int main()
{
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    {
        int x = 10;
        int y = 20;
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        {
            int z = 100;
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
    }
    return 0;
}

