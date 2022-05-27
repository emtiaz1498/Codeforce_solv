#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],count=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
if(a[i]==1)
{
    count++;
}
    }
     if(count==1)
        {
            cout<<"HARD"<<endl;
        }
        else
        {
            cout<<"EASY"<<endl;
        }
}
