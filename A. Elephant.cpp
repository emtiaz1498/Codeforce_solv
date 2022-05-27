#include<iostream>
using namespace std;
int main()
{
    int n;
    int ans;
    cin>>n;
    ans=(n/5)+(n%5!=0);
    cout<<ans;
    return 0;
}
