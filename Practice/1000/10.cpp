


#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {

       int n;
       cin>>n;
        int ans = 0;
        while((1 << (ans + 1)) <= n - 1) ++ans; 
        for(int i = (1 << ans) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << ans); i < n; i++) {
            cout << i << ' ';
            
        }
        cout << '\n';
    }

}
