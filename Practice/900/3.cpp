#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Number of lamps
        string s;
        cin >> s; // Desired final configuration
        
        
        int cnt =0,mi =n,mx=-1;

        for (int i=0;i<n;i++) {
            if(s[i] =='1'){
                cnt++;
                
               mi = min(mi,i);

                mx = max(mx,i);
            }

        }
        cout << (cnt % 2 == 1 || (cnt == 2 && mx - mi == 1) ? "NO\n" : "YES\n");
        
        
    }
    
    return 0;
}
