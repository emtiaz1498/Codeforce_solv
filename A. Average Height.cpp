#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    string a;
    while(n--)
    {
        cin>>t;
       for(int i=0; i<t; i++)
        {
            cin>>a ;
             if((a[i] +a[i+1])%2==0)
            {
                cout<<a[i]<<  a[i+1];

            }

        }

    }
}
