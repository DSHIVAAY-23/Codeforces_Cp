#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// to do and  understand

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
     int a,b;
     cin >> a>>b;

     int count = 0;
     if (b>a){

        cout<< 1 <<endl;
     }
     while(a>=b){
         a /= b;
        count += 1;
        
        if (a == b){
            b+=1;
        }
        
        }
     }


      
     

     

    
    return 0;
}
