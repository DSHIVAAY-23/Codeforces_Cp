/*A. Elephant
time limit per test1 second
memory limit per test256 megabytes
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;  
    int count = 0;
    // if (x > 5 ) {
    //     count = x/5 + 1;
    // }

    // else{
    //     count = 1;
    // }
    // (a/b) = (a+b-1)/b;
    count = (x + 4)/5;

    cout<<count<<endl; 

  

    return 0;
}