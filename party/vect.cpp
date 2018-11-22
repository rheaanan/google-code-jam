#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	static const int arr[] = {1,2,3,4,5,5,6,7};
	vector <int> v (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	v.erase(5);
	vector <int> :: iterator it;
	for(it=v.begin();it!=v.end();++it)
	{
		cout<< *it;
	}

}