#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main ()
{
	string s;
	getline(cin,s);
	int sz= s.size();
	string r= "";
	for (int i =0;i<sz;i++)
	{
		if(isalpha(s[i]))
		{
			r+=tolower(s[i]);
		}
	}
	string g=r;
	reverse(g.begin(),g.end());
	if(g==r)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}
