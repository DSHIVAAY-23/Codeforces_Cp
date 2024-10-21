/*C. Longest Good Array
time limit per test2 seconds
memory limit per test256 megabytes
Today, Sakurako was studying arrays. An array a
 of length n
 is considered good if and only if:

the array a
 is increasing, meaning ai−1<ai
 for all 2≤i≤n
;
the differences between adjacent elements are increasing, meaning ai−ai−1<ai+1−ai
 for all 2≤i<n
.
Sakurako has come up with boundaries l
 and r
 and wants to construct a good array of maximum length, where l≤ai≤r
 for all ai
.

Help Sakurako find the maximum length of a good array for the given l
 and r
.

Input
The first line contains a single integer t
 (1≤t≤104
)  — the number of test cases.

The only line of each test case contains two integers l
 and r
 (1≤l≤r≤109
).

Output
For each test case, output a single integer  — the length of the longest good array Sakurako can form given l
 and r
.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    while (t--) {
        long long l, r;
        cin >> l >> r;
        
        long long d = r - l;  // Difference between r and l
        
        // We need to find the maximum k such that k * (k + 1) / 2 <= d
        long long k = (-1 + sqrt(1 + 8 * d)) / 2;  // Using the quadratic formula to find k
        
        cout << k + 1 << endl;  // Output the length of the longest good array
    }

    return 0;
}
