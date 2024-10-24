#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        long long n;
        cin >> n;  // Total number of wheels

        if (n < 4 || n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        long long max_buses = n / 4;

        long long min_buses;
        if (n % 6 == 0) {
            min_buses = n / 6;
        } else {
            min_buses = n / 6 + 1; 
        }

        cout << min_buses << " " << max_buses << endl;
    }

    return 0;
}
