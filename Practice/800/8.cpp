/*
You are given a sequence of integers. Output the alternating sum of this sequence. In other words, output a1−a2+a3−a4+a5−…
. That is, the signs of plus and minus alternate, starting with a plus.

Input
The first line of the test contains one integer t
 (1≤t≤1000
) — the number of test cases. Then follow t
 test cases.

The first line of each test case contains one integer n
 (1≤n≤50
) — the length of the sequence. The second line of the test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

Output
Output t
 lines. For each test case, output the required alternating sum of the numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
    int n ;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int sum =0;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i+=2){
     sum1+=a[i];

    }
    for(int i = 1; i < n; i+=2){
     sum2+=a[i];
    }
    sum = sum1 - sum2;
    cout << sum << endl;

    }
}