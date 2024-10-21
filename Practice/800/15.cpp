
#include <iostream>
#include <vector>

using namespace std;
int calculate_typing_time(const string &s) {
    int time = 2;  // First character always takes 2 seconds
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            time += 1;  // Same as previous character
        } else {
            time += 2;  // Different from previous character
        }
    }
    return time;
}
int main(){
    int t;
    cin >> t;  // Read number of test cases

    while(t--){
        string s;
        cin >> s;
          string best_string;
        int max_time = 0;
        
        for (char ch = 'a'; ch <= 'z'; ch++) {
            for (int i = 0; i <= s.length(); i++) {
                string new_string = s.substr(0, i) + ch + s.substr(i);  
                int time = calculate_typing_time(new_string);  
                
                if (time > max_time) {
                    max_time = time;
                    best_string = new_string;  // Update the best result
                }
            }
        }
        
        cout << best_string << endl;

    }

    return 0;
}