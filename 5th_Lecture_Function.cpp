

// Function

// #include <iostream>
// #include <string>
// using namespace std;

// // Function definition 
// void printHello(){
//     cout << "Hello Mors !!! \n";
// }

// int num() {
//     cout << "Mors is a nood coder\n";
//     return 5;
// }

// int sum( int a, int b) {
//     return a+ b ;
// }

// int minOFTwo(int a, int b) { // paeamaters
//     if (a < b)
//     {
//         return a;
//     } else {
//         return b;
//     }
    
// }

// int main() {

//     // printHello();
//     // num();
//     // cout << "The number is " << num();
//     // cout << "The sum is " << sum(44,55);
//     cout << "The small number is " << minOFTwo(44,55); // arguments

//     return 0;

// }



// problem Q1

// Calculate sum of number from 1 to N

// #include <iostream>
// #include <string>
// using namespace std;

// int sum(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum +=i;
//     }
//     return sum;
    
// }

// int main() {

//     cout << "The sum is " << sum(5);

//     return 0;

// }


// Q2 Calculate N Factorial

// #include <iostream>
// #include <string>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;

//     }
//     return fact;
    
// }

// int main() {

//     cout << "The factorial is " << factorial(5);

//     return 0;

// }


// Q3
// Calculate sum of digits of a number
// #include <iostream>
// #include <string>
// using namespace std;

// int sum(int n){
//     int sum = 0;
//     while (n > 0)
//     {
//         int digit = n % 10;
//         n /= 10;
//         sum += digit;
//     }
//     return sum;
// }

// int main() {

//     cout << "The sum is " << sum(123);

//     return 0;

// }

// Q4
// calcuate nCr binomial coefficient for n or r 
// #include <iostream>
// #include <string>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r) {
//     int nCr = factorial(n) / (factorial(r) * factorial(n-r));
//     return nCr;
// }

// int main() {
//     int n = 8, r = 4;

//     cout << "The nCr is " << nCr(n,r);
//     return 0;
// }

// practise question

// Q1
// WAF to chack  if a number is prime or not 

// #include <iostream>
// #include <string>
// using namespace std;

// int isPrime(int n) {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for ( int i = 2; i*i <= n; i++){
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n = 5;
//     if (isPrime(n))
//     {
//         cout << "The number is prime";
//     } else {
//         cout << "The number is not prime";
//     }
    
//     return 0;
// }



// Q2
// WAF to print all prime number from 2 to N

// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n = 10;
//     cout << "The prime numbers are: ";

//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// Thanks for reading 