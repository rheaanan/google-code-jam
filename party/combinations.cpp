#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
   int n, r;
   cin >> n;
   cin >> r;
   int a [] ={2,3,5,7};
   vector<bool> v(n);
   fill(v.begin(), v.begin() + r, true);

   do {
       for (int i = 0; i < n; ++i) {
           if (v[i]) {
               cout << a[i] << " ";
           }
       }
       cout << "\n";
   } while (prev_permutation(v.begin(), v.end()));
   return 0;
}