


#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {

       int n,k;
       cin>>n>>k;
       vector<int> a(n);

       for (int i=0; i<n; i++){
        cin>>a[i];
       }
      int result =0;
      int operations =0;
      for (int i=0; i<n; i++){
        int mi = min(mi,a[i]);
          result *= a[i];
          int x = result%k;
          if (x==0) {
            operations=0;
          }
          else{
            operations = k -mi;
          }


      }

     cout<<operations<<endl;
   
    }

}
