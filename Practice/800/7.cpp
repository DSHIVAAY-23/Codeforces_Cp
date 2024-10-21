/*
Eralim, being the mafia boss, manages a group of n
 fighters. Fighter i
 has a rating of ai
.

Eralim arranges a tournament of n−1
 battles, in each of which two not yet eliminated fighters i
 and j
 (1≤i<j≤n
) are chosen, and as a result of the battle, fighter i
 is eliminated from the tournament, and the rating of fighter j
 is reduced by the rating of fighter i
. That is, aj
 is decreased by ai
. Note that fighter j
's rating can become negative. The fighters indexes do not change.

Eralim wants to know what maximum rating the last remaining fighter can preserve if he chooses the battles optimally.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤2⋅105
) — the number of fighters.

The second line of each test case contains n
 integers a1,a2,…an
 (1≤ai≤109
) — the ratings of the fighters.

The sum of n
 over all testcases does not exceed 2⋅105
.

Output
For each testcase, output a single integer — the maximum rating that the last remaining fighter can preserve.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {

        long long n;
        long long seclast;
        long long last; 
        long long  sum = 0;
        
        cin >> n;
        vector<long long> a(n);
        
        for (long long  i = 0; i < n-2; i++) {
            cin >> a[i];
            sum += a[i];
        }

       cin >> seclast;
       seclast -= sum;
       cin >>last;
       last -= seclast;
       cout << last << endl;

              
        }
        
    }
    
 