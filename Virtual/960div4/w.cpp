#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;  // Read number of test cases
 
    while(t--){
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1>> b2 ;
        
        int cnt = 0;
        
        if(a1<b1 && a2<b2 && a1<b2 && a2<b1 ){
            cnt = 0;
        }
        else if(a1>b1 && a1>b2 && a2>b1 && a2>b2  ){
            cnt +=4;
        }
        else if(a2>b1 && a2>b2){
            cnt +=2;
        }
        
        else if(a1<b1 && a1>b2 && a2<b1 && a2>b2){
            cnt +=2;
        }
        
        cout << cnt << endl;
 
    }
 
    return 0;
}