#include<iostream>
using namespace std;
int main()
{
    int buy,i,t,n;
    int bro;
    cin>>i>>t>>n;

    buy=i*(n*(n+1)/2);

    bro=buy-t;
    if(bro<=0)
    {
        cout<<"0"<<endl;

    }
    else
        cout<<bro<<endl;
    return 0;
}
