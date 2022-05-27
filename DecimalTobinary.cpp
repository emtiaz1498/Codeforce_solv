#include<bits/stdc++.h>
using namespace std;

void decTobina(int n)
{
    int binaryBox[32];
    int i=0;
    int c=0;
    while(n>0)
    {
        binaryBox[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<binaryBox[j];
        cout<<endl;
        if(binaryBox[i]=1)
        {
            c++;
            cout<<c;
        }
}
int main()
{
    int n;
    cin>>n;
    decTobina(n);
    return 0;

}
