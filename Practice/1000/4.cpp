#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
     int n;
     cin >> n;   
     vector<int> a(n); 

     for (int i = 0; i < n; i++) {
      cin >> a[i];  
     }
     int prefix_count =0;
     int mx = 0;
     long long sum = 0;

     
    
     for(int i = 0; i < n; i++) {
         sum += a[i];
         mx = max(mx,a[i]);
         if (sum - mx ==mx){
            prefix_count++;
         }


     }
     cout << prefix_count << endl;

    }
    
    return 0;
}
