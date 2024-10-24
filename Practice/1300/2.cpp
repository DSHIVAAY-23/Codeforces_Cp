#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 

using namespace std;

const int MAX_LIMIT = 1000000;
vector<bool> is_prime(MAX_LIMIT + 1, true);
vector<long long> t_primes;

// Function to precompute primes using Sieve of Eratosthenes
void sieve_of_eratosthenes() {
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_LIMIT; j += i) {
                is_prime[j] = false;
            }
        }
    }
    // for 5 divisior 
    // Storing squares of prime numbers
    for (int i = 2; i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            t_primes.push_back(1LL * i * i* i* i); // Store i^2
        }
    }
}


int main() {
    sieve_of_eratosthenes(); // Precompute primes and their squares

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        // Check if x is a T-prime
        if (binary_search(t_primes.begin(), t_primes.end(), x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
