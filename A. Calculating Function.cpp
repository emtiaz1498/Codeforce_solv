#include <iostream>

using namespace std;

int main ()
{
	long long int n,a,b;
	cin>>n;
	if(n%2==0)
    {
        a=n/2;
        cout<<a<<endl;
    }
    else{
        b=-((n/2)+1);
        cout<<b<<endl;
    }

	return 0;
}
