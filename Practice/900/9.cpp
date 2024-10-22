#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int k = 0; k <= n; k++) {
      if (k == 0 || a[k - 1] < k) {
        if (k == n || a[k] > k) {
          ans += 1;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}