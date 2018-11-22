// C++ program to demonstrate vector of pairs
#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<string,int> &a, 
               const pair<string,int> &b)
{
       return (a.second < b.second);
} 
int main()
{
    //declaring vector of pairs
    vector< pair <string,int> > vect;
 
    // initialising 1st and 2nd element of
    // pairs with array values
    string arr[] = {"yellow", "green", "blue", "pink" };
    int arr1[] = {30, 60, 20, 50};
    int n = 4;
    
    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
    sort(vect.begin(),vect.end(),sortinrev);
 
    // Printing the vector
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
 
    return 0;
}