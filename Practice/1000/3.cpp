/*You are given an array of integers a
 of length n
.

You can apply the following operation any number of times (maybe, zero):

First, choose an integer k
 such that 1≤k≤n
 and pay k+1
 coins.
Then, choose exactly k
 indices such that 1≤i1<i2<…<ik≤n
.
Then, for each x
 from 1
 to k
, increase aix
 by 1
.
Find the minimum number of coins needed to make a
 non-decreasing. That is, a1≤a2≤…≤an
.

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output a single integer — the minimum number of coins needed to make a
 non-decreasing.
*/


#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {

       int n;
       cin>>n;
       vector<int> a(n);
       for (int i=0; i<n; i++){
        cin>>a[i];
       }


       ll prof_max =0, s=0,mx=0;

       for (int i=0; i<n; i++){
        prof_max = max(prof_max,(ll) a[i]);
        ll d = prof_max - a[i];
        s +=d;
        mx= max(mx,d);
       }    
       cout<< s + mx<<'\n';
   
    }

    return 0;
}
