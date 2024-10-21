/*
A. Stickogon
time limit per test1 second
memory limit per test256 megabytes
You are given n
 sticks of lengths a1,a2,…,an
. Find the maximum number of regular (equal-sided) polygons you can construct simultaneously, such that:

Each side of a polygon is formed by exactly one stick.
No stick is used in more than 1
 polygon.
Note: Sticks cannot be broken.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the number of sticks available.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
) — the stick lengths.

Output
For each test case, output a single integer on a new line — the maximum number of regular (equal-sided) polygons you can make simultaneously from the sticks available.


*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

         unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        // Maximum number of polygons we can form
        int max_polygons = 0;

        for (auto &pair : freq) {
            int stick_length = pair.first;
            int count = pair.second;

         
            max_polygons += count / 3; // Maximum triangles we can form
        }

        cout << max_polygons << endl;
    }

}