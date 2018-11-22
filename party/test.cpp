
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> a = {1,3,2,4,25,6};
	vector <int> b =a ;
	a[0]=99;
	copy(a.begin(),a.end(),ostream_iterator <int> (cout<" "));
	copy(b.begin(),b.end(),ostream_iterator <int> (cout<" "));
}