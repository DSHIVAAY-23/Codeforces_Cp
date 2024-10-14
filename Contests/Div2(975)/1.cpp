#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n, r;
        cin >> n >> r;
        
        vector<int> a(n);
        int total_people = 0; 
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_people += a[i];
        }
        
        int happy_people_sum = 0; 
        int sum_2 = 0;  
        int count = 0;  
        
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {  
                happy_people_sum += a[i];  
                count += a[i] / 2;  
            } else { 
                happy_people_sum += a[i] - 1;  
                sum_2 += 1;  
                count += (a[i] - 1) / 2; 
            }
        }

        int remaining_seats = r - count;  


        if (sum_2 % 2 == 0) {  
            count += sum_2 / 2;  
            remaining_seats = r - count;  
            happy_people_sum += 2 * remaining_seats;  
        } else {  
            count += (sum_2 - 1) / 2;  
            count++; 
            happy_people_sum++;  
            remaining_seats = r - count;  
            happy_people_sum += 2 * remaining_seats;  
        }
        
        cout << min(total_people, happy_people_sum) << endl; 
    }
    
    return 0;
}
