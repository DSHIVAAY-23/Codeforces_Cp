#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        bool possible = true;

        // Iterate from the second to the last element
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ans++;
            }

            // If after halving, a[i] is still not less than a[i + 1], it's impossible
            if (a[i] >= a[i + 1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << ans << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
