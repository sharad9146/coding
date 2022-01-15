#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int Recursive(int a,int b)
{
	if(b==0)
		return 1;
	long res=Recursive(a,b/2);
	if(b&1)
		return a*(res*res*1ll)%mod;
	else
		return (res*res*1ll)%mod;
}
int main()
{
int a=2;
int b=13;
cout<<Recursive(a,b);
return 0;
}