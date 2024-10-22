#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> cnt(26, 0);  // To count occurrences for 26 letters
    string s = "";  // Result string
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (cnt[j] == a[i]) {
                cnt[j]++;  // Increment count for this character
                s += char(97 + j);  // Add the character to the result string
                break;
            }
        }
    }
    
    cout << s << endl;  // Output the result
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();  // Call the solve function for each test case
    }
    return 0;
}
