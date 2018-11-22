#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long int num(long int n, int a[], int sz){	
	long int c=0;
    long int deno;
    vector<bool> v(sz);
    int alt=-1;
    for (int r=1;r<=sz;r++)
    {alt*=-1;
    	fill(v.begin(), v.begin() + r, true);
    do {deno=1;
       for (int i = 0; i < n; ++i) {
           if (v[i]) {
               deno*=a[i];
           }
       }c+=(alt*(n/deno)); 
   }while (prev_permutation(v.begin(), v.end()));
	}    return n-c;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int a [] ={2,3,5};
    long int n;
    cin>>n;
    cout<<num(n,a,3)<<endl;
}
}
