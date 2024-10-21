#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;  
        
        vector<int> a(n);
        int odd_cnt = 0;
        int even_cnt = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];  
            if(a[i]%2 != 0) odd_cnt++;
            else even_cnt++;
        }
            // cout<<(odd_cnt?even_cnt + (odd_cnt+1)/2:0)<<endl;
 if (odd_cnt > 0) {
    cout << even_cnt + (odd_cnt + 1) / 2 << endl;
} else {
    cout << 0 << endl;
}

    }
    return 0;
}