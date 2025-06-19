
// Prime nuber 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// string isPrime(int n) {
//     for (int i = 2; i < n; i++) {
//         if(n % i == 0) {
//             return " Non Prime Number ";
//         }
//     }
//     return " Prime Number ";
// }

// int main() {

//     int n = 44;
//     cout << n << " is " << isPrime(n) << endl;
//     return 0;
// }
    
// Sieve of Eratosthenes
// 204. Count Primes

// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n < 2) return 0;
//         int ans = 0;
//         vector<bool> isPrime(n+1 , true);
//         for (int i = 2; i < n; i++) {
//             if(isPrime[i]) {
//                 ans++;
//                 for(int j = i*2; j < n; j+=i) {
//                     isPrime[j] = false;
//                 }
//             }
//         }
//         return ans;
//     }
// };