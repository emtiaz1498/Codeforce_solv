#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,n;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        if(i%2==1)
            cout<<"I hate ";
        else if(i%2==0)
            cout<<"I love ";
        if(i!=n)
            cout<<"that ";
    }
    cout<<"it"<<endl;
    return 0;
}
