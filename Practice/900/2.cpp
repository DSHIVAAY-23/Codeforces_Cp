#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
       int n,m,k;
       cin>>n>>m>>k;

       int max = (n+m-1)/m;

       
       if (max+k>=n){
        cout<<"no"<<'\n';
       }
       else{
        cout<<"yes"<<'\n';
       }
      
    }

    return 0;
}
