
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        int n;
        cin >> n;
        int count = 0;
        if (n%4==0){
            cout<<n/4<<endl;

        }
        else if(n%4==2){
            cout<<(n/4)+1<<endl;
        }
        else if(n>0 && n<4){
            cout << 1<<endl;
        }

    }

    return 0;
}