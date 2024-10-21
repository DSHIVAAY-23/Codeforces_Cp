#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid overflow

        if (a[mid] == target) {
            return mid;  // Return the index if the target is found
        }
        else if (a[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 5;

    int result = binarySearch(a, n, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
