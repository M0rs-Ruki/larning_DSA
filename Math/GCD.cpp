

// GCD => Greatest Common Divisor
// HCF => High Common Factorial 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int main() {
//     int a = 44;
//     int b = 24;
//     int gcd = 1;
//     if(a == 0) return b;
//     if(b == 0) return a;
//     if(a == b) return a;
    
//     for (int i = 0; i < min(a,b); i++) {
//         if(a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }
//     cout << gcd << endl;
//     return 0;
// }


// Euclid's Algorithm

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a > b) {
        return gcd(a%b, b);
    } else {
        return gcd(a, b%a);
    }
    return 0;
}

int main() {
    int a = 44;
    int b = 24;
    cout << gcd(a,b) << endl;
    return 0;
}