#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isFair(long long num) {
    long long original = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && original % digit != 0) {
            return false;  
        }
        num /= 10;  // Move to the next digit
    }
    return true;  

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        long long result = n;
        while (!isFair(result)) {
            result++;
        }
        
        cout << result << endl;
    }

    return 0;
}
