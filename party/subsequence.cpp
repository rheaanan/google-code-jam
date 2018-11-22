#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >>n;
	int A[n];
	vector <int> m(n);
	fill(m.begin(),m.end(),1);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int maxso=0,pos=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"mi"<<m[i]<<"mj"<<m[j]<<" ";
			if(A[j]<A[i]){ 
				m[i]=max(m[i],(m[j]+1));
				//copy(m.begin(),m.end(),ostream_iterator <int>(cout," "));cout<<endl;
				if(m[i]>maxso){
					maxso=m[i];
					pos=i;
					cout<<"maxso"<<maxso<<endl;
				}
			}
			//copy(m.begin(),m.end(),ostream_iterator <int>(cout," "));cout<<endl;


		}
	}
	int it=pos;
	while(maxso){
		while(m[it]!=maxso)
		{
			it--;
		}
		cout<<A[it]<<" ";
		maxso--;

	}



}