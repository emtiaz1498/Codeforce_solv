#include<iostream>
using namespace std;
int main()
{
    int t;
    int f,c;
    int count =0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>f>>c;
        if(c-f>=2)
        {
            count++;
        }
        else
        {

        }
    }
    cout<<count<<endl;
}
