/*Long Queue
Unfortunately as soon as Sushil reached the sweet shop, he saw there was a huge queue. At first, Sushil joins at the end of the line. But he is impatient and now has decided to bully people in front of him, by flexing his wealth, so that they let him proceed.

There are 
N
N people in the line, with the 
i
i-th person having a wealth of Rs. 
A
i
A 
i
​
 . Sushil is currently the 
N
N-th person in this line.

Everytime Sushil sees that the person directly in front of him has a wealth less than or equal to half of his own wealth, Sushil will bully him out of the line, and the queue will reduce by 
1
1. Note that Sushil can only bully the person directly infront of him.

More formally, if Sushil has wealth 
X
X, he can bully people with wealth smaller than or equal to 
X
2
2
X
​
 . Find the final position of Sushil.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of input contains 
N
N - the number of people in the queue including Sushil.
The second line contains 
N
N integers - 
A
1
,
A
2
,
.
.
.
.
,
A
N
A 
1
​
 ,A 
2
​
 ,....,A 
N
​
 , the wealths of all the people in the queue.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;  
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        int sushil_wealth = a[n - 1];  
        int position = n; 
        
        for(int i = n - 2; i >= 0; i--) {
            if(a[i] <= sushil_wealth / 2) {
                position--;  
            } else {
                break;  
            }
        }

        cout << position << endl;  
    }
    return 0;
}
