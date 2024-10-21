/*
A. Upload More RAM
time limit per test1 second
memory limit per test256 megabytes
Oh no, the ForceCodes servers are running out of memory! Luckily, you can help them out by uploading some of your RAM!

You want to upload n
 GBs of RAM. Every second, you will upload either 0
 or 1
 GB of RAM. However, there is a restriction on your network speed: in any k
 consecutive seconds, you can upload only at most 1
 GB of RAM in total.

Find the minimum number of seconds needed to upload n
 GBs of RAM!

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first and only line of each test case contains two integers n
 and k
 (1≤n,k≤100
) — the number of GBs that you want to upload and the length of the time window respectively.

Output
For each test case, output a single integer — the minimum number of seconds needed to upload n
 GBs of RAM.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        int n, k;
        cin >> n >> k;

       cout<<(n*k) -(k-1)<<endl;
    }

    return 0;
}