#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int testCase = 0; testCase < testCases; testCase++) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0; // To store the result (use long long to handle large values)
        int len = 0;       // Length of the current valid segment

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                len++;  // Extend the current segment if the temperature is valid
            } else {
                // Process the segment if it is long enough
                if (len >= k) {
                    ans += (long long)(len - k + 1) * (len - k + 2) / 2;
                }
                len = 0; // Reset the length for the next segment
            }
        }

        // Process the last segment if it was valid
        if (len >= k) {
            ans += (long long)(len - k + 1) * (len - k + 2) / 2;
        }

        cout << ans << endl; // Output the result for the current test case
    }

    return 0;
}
