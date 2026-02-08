
#include <iostream>
using namespace std; 

// int main() {
//         int n = 4;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 cout << j;
//             }
//             cout << endl;
//         }   
//     return 0;
// }
// 1234
// 1234
// 1234
// 1234 a loop that print 1234 four times nice 


// int main() {
//     int n = 4;
//     for (int i = 1; i <=n; i++) {
//         cout << i;
//     }
//     return 0;
// } // 1234    a normal loop


// int main() {
//     for (int i = 0; i < 4; i++) {
//         char ch = 'A';
//         for (int j = 0; j < 4; j++) {
//             cout << ch;
//             ch++;
//         };
//         cout << endl;
//     }
//     return 0;
// }

// int main() { 
//     int in = 1;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << in << " ";
//             in++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int n =4;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }   
// }

// int main() {
//     int n =5;
//     for (int i = 1; i< n; i++) {
//         for (int j = 1; j< i+1; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     int n =4;
//     for (int i =0; i<n+1; i++) {
//         for (int j =1; j<i+1; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j =i+1; j>0; j--) {
            cout << j ;
        }
        cout << endl;
    }
}