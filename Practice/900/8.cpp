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
        long long cnt1=0;
        long long sum =0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
             
        }
        for (int i = 0; i < n; i++){
            sum += a[i];
            if(a[i]==1){
                cnt1++;
            }
        }
      
       if (sum >= cnt1 + n && n>1){
        cout <<"Yes"<<endl;
       }
       else {
        cout <<"No"<<endl;
       }

       
    
        
    }
    
    return 0;
}
