
/*Alice got a permutation a1,a2,…,an
 of [1,2,…,n]
, and Bob got another permutation b1,b2,…,bn
 of [1,2,…,n]
. They are going to play a game with these arrays.

In each turn, the following events happen in order:

Alice chooses either the first or the last element of her array and removes it from the array;
Bob chooses either the first or the last element of his array and removes it from the array.
The game continues for n−1
 turns, after which both arrays will have exactly one remaining element: x
 in the array a
 and y
 in the array b
.

If x=y
, Bob wins; otherwise, Alice wins. Find which player will win if both players play optimally.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤3⋅105
).

The next line contains n
 integers a1,a2,…,an
 (1≤ai≤n
, all ai
 are distinct) — the permutation of Alice.

The next line contains n
 integers b1,b2,…,bn
 (1≤bi≤n
, all bi
 are distinct) — the permutation of Bob.

It is guaranteed that the sum of all n
 does not exceed 3⋅105
.

Output
For each test case, print a single line with the name of the winner, assuming both players play optimally. If Alice wins, print Alice
; otherwise, print Bob
.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long cnt1 =0;
        long long cnt2 =0;
        for (long long i = 0; i < n; i++) {
            if (a[i] == b[i]){
                cnt1++;

            }
            if(a[i] == b[n-i-1]){
                cnt2++;
            }
        }
        if (cnt1==n||cnt2==n){
            cout << "Bob" << '\n';
        }
        else{
            cout << "Alice" << '\n';
        }
    }

    return 0;
}
