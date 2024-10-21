
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        int n,m;
        cin >> n>>m; 

        if(n>=m){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}