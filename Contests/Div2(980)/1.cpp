#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        long long a, b;
        cin >> a >> b; 
        if (a >= b) {
            cout << a << endl;
            continue;  
        }

        if (b > 2 * (a - 1) + 1) {
            cout << 0 << endl;
            continue;  
        }

        int low = 0, high = a, mid, max = 0;

        while (low <= high) {
            mid = (low + high) / 2;
            if (b - (mid * 2) <= (a - mid)) {
                max = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << a - max << endl;
    }

    return 0;
}
