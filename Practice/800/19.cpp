
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        int n,a,b;
        cin >> n>>a>>b; //

        int count = 0;
        if (2*a<=b){
            count = n*a;
        }
        else if (2*a>b){
            count = (n/2)*b;
            if (n%2 ==1){
                count += a;
            }
            
        }
      cout<<count<<endl;


    }

    return 0;
}
