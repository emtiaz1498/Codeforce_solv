#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;
int main()
{
    string   x,y;
    cin>>x>>y;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]>='A' && x[i]<='Z')
        {

            x[i]=x[i]+32;
        }
 if(y[i]>='A' && y[i]<='Z')
        {
            y[i]=y[i]+32;
        }

        if(x[i]>y[i])
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(x[i]<y[i])
        {
            cout<<"-1"<<endl;
            return 0;
        }

    }

    cout<<"0"<<endl;

    return 0;
}

