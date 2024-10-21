
// TO Upsolve

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort in descending order to maximize the cans taken with fewer button presses
        sort(a.rbegin(), a.rend());

        int presses = 0;
        int cansCollected = 0;

        for (int i = 0; i < n; i++) {
            cansCollected += a[i];
            presses+=1;
            if (cansCollected >=k){
                break;
            }
            
            
        }

        cout << presses << endl;
    }
    
    return 0;
}
