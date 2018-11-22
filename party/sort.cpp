#include <algorithm>
#include <iostream>
using namespace std;
int main ()
{
	string s[10];
	int t=10, n=10;
	while(t--)
	{
		cin>>s[t];
	}
	sort(s,s+n);
	while(n--)
	{
		cout<<s[n]<<endl;
	}
	return 0;
}