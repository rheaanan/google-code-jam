#include <bits/stdc++.h>
using namespace std;
int main ()
{
	set <int> A;
	set <int> B;
	cin >>int m>>int n;
	int x;
	for (int i =0;i<m;i++)
	{
		cin>>x;
		A.insert(x);
	}
	for (int i =0;i<m;i++)
	{
		cin>>x;
		B.insert(x);
	}
	A=A-B;
	

}
