#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;  // Number of test cases
    cin >> t;
    freopen("r","./../../io/input.txt");
    
    while (t--) {
     int n;
     cin >> n;   
     vector<int> a(n); 

     for (int i = 0; i < n; i++) {
      cin >> a[i];  
     }
     int ans =n;
     int last = -1;
     for(int i = 0; i < n; i++) {
        ans = min(ans,i-last-1);
        //to do



     }

    }
    
    return 0;
}
