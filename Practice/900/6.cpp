#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        // Step 1: Count the frequency of each character
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        // Step 2: Count the number of characters with odd occurrences
        int odd_count = 0;
        for (auto it : freq) {
            if (it.second % 2 != 0) {
                odd_count++;
            }
        }
        
        if (odd_count > k + 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
