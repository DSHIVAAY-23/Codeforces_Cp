/*A. Zhan's Blender
time limit per test1 second
memory limit per test256 megabytes
Today, a club fair was held at "NSPhM". In order to advertise his pastry club, Zhan decided to demonstrate the power of his blender.

To demonstrate the power of his blender, Zhan has n
 fruits.

The blender can mix up to x
 fruits per second.

In each second, Zhan can put up to y
 fruits long longo the blender. After that, the blender will blend min(x,c)
 fruits, where c
 is the number of fruits inside the blender. After blending, blended fruits are removed from the blender.

Help Zhan determine the minimum amount of time required for Zhan to blend all fruits.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). The description of the test cases follows.

The first line of each test case contains one long longeger n
 (0≤n≤109
) — the number of fruits Zhan has.

The second line of each test case contains two long longegers x
 and y
 (1≤x,y≤109
) — the number of fruits the blender can blend per second and the number of fruits Zhan can put long longo the blender per second.

Output
For each testcase, output a single long longeger — the minimum number of seconds to blend all fruits.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
    long long n ;
    cin >> n;
    long long x, y;
    long long btime,ftime;
    cin >> x >> y;
    
     btime = (n+x -1)/x;
     ftime = (n+y-1)/y;
     cout << max(btime, ftime) << endl;
   
  
    }
}