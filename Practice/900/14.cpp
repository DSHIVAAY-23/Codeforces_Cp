#include <iostream>
using namespace std;

// Function to check if a number is a power of 2a
bool isPowerOfTwo(long long n) {
    return (n & (n - 1)) == 0;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        long long n;
        cin >> n;
        
        if (n == 1) {
            cout << "NO" << endl;
        } 
        else if (isPowerOfTwo(n)) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
