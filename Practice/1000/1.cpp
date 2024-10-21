#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int l, r, L, R;
        cin >> l >> r;  
        cin >> L >> R;  
        
       int inter = min(r,R) -max(l,L) + 1;
       int ans = inter -1;
       if(inter<=0) {
        ans = 1;
       }
       else{
        ans += (l!L);
        ans += (r!R);

       }
       cout<<ans<<endl;

    }
    
    return 0;
}
