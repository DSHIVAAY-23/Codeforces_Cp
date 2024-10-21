#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Number of lamps
        vector<int> a(n); 
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int operations = 2*n;
        int cnt =0;

       for(int i = 0; i < n; i++){
        if(a[i] == 1){
				a[i]++;
			}

       }
        for(int i = 1; i < n; i++){
			if(a[i] % a[i - 1] == 0){
				a[i]++;
			}
		}
        
        for(auto i : a){
			cout << i << " ";
		}
		cout << "\n";
       
        
        
    }
    
    return 0;
}
