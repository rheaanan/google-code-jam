#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	list <double> l;
	list <double> :: iterator it;
	double t,x;
	int n,i;
	cin>>n;
	cin>>x;
	l.push_front(x);
	//cout<<int(x)<<endl;
	int f=0;
	for (i=2;i<=n;i++)
	{
		f=0;
		cin>>x;
		cout<<"x"<<x;
		for(it=l.begin();it!=l.end();++it)
		{
			if((*it) >= x)
			{
				
				f=1;
				l.insert(it,x);
				break;
			}
		}
		
		if(f==0)
		{
			l.push_back(x);
		}
		//copy(l.begin(), l.end(),ostream_iterator<double>(cout, " "));
		double med;
		it=l.begin();
		advance(it,i/2);
		if (i%2==0)
		{
			 med=(*it+*(--it))/2;
		}
		else
			med= *it;
		//cout<<*it<<"iiiitt";
		cout<<int(med)<<endl;
	}	
}
