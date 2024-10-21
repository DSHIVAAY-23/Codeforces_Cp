#include <iostream>
#include <string>

using namespace std;

// Function to determine the winner of the game
string determine_winner(int n, string s) {
    int up_count = 0; 

    for (char c : s) {
        if (c == 'U') {
            up_count++;
        }
    }
    if (up_count % 2 == 0) {
        return "NO"; // Bob wins
    } else {
        return "YES"; // Alice wins
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        string s;

        cin >> n; 
        cin >> s; 

        cout << determine_winner(n, s) << '\n';
    }

    return 0;
}
