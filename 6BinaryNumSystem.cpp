
// Decimal to Binary conversion

// #include <iostream>
// #include <string>
// using namespace std;

// int toBinary(int n) {
//     int dec = 0;
//     int pow = 1;
//     while (n > 0){
//         int rem = n % 2;
//         n /=2;
//         dec += (rem * pow);
//         pow *= 10;
//     }
//     return dec;
    
// }

// int main() {
//     int n = 10;
    
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Decimal: " << i << " Binary: " << toBinary(i) << endl;
//     }
    

// }


// Binary to Decimal conversion

// #include <iostream>
// #include <string>
// using namespace std;

// int toDecimal(int n) {
//     int ans = 0 , pow = 1;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         ans += (rem * pow);
//         n /= 10;
//         pow *= 2;
//     }
//     return ans;
// }

// int main() {

//     cout << "Decimal: " << toDecimal(1010) << endl;
//     cout << "Decimal: " << toDecimal(111) << endl;
    
//     return 0;
// }
