#include <iostream>
#include <bits/stdc++.h>

bool check_pos(int x)
{
	if(x>=0)
	{
		return true;
	}
	return false;
}
int main (){
	int t,n ;
	cin>>t;
	while(t--){
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		int i=0,j=0;
		while(i<n&&j<n){
			while(!check_pos(A[i])){
				i++;
			}
			while(check_pos(A[j])){
				j++;
			}
			swap 
		}
	}
}
