
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        int n;
        cin >> n;
        vector<int> a(2*n);
        int result = 0;
        for (int i = 0; i < 2*n; i++){
            cin >> a[i];
          
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < 2*n - 1; i += 2){
            result += a[i];
        }



            cout << result << endl;
      

    }

    return 0;
}