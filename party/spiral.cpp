#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print_row(vector<vector <int>>A,int start_i,int start_j,int end_j,char dir){
    if(dir=='+'){
        for(int i=start_i, j=start_j;j<=end_j;j++){
           cout<< A[i][j]<<" ";
        }
    }
    else if (dir=='-'){
        for(int i=start_i, j=start_j;j>=end_j;j--){
           cout<< A[i][j]<<" ";
        }   
    }
    
}
void print_col(vector<vector <int>>A,int start_i,int end_i,int start_j,char dir){
    if(dir=='+'){
        for(int i=start_i, j=start_j;i<=end_i;i++){
           cout<< A[i][j]<<" ";
        }
    }
    else if (dir=='-'){
        for(int i=start_i, j=start_j;i>=end_i;i--){
           cout<< A[i][j]<<" ";
        }   
    }
    
}

void display_spiral (vector<vector<int>>A){
    int r = A.size();
    int c = A[0].size();
    int sq = min(r,c)/2;
    int m = r;
    int n = c;
    int b = 0;
    while(sq--)
    {
        print_row(A,b,b,n-2,'+');
        print_col(A,b,m-2,n-1,'+');
        print_row(A,m-1,n-1,b+1,'-');
        print_col(A,m-1,b+1,b,'-');
        b++;
        n--;
        m--;
            
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int m,n;
    cin>>m;
    cin>>n;
    vector <vector<int>> A (m,vector<int>(n));
    for(int i=0;i<n;i++)
    {
           for(int j=0;j<m;j++)
           {
                cin>>A[i][j];
           }
    }
    display_spiral(A);
    return 0;
}