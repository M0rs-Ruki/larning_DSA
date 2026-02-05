// sum of 2 num 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     cout << "The sum is " << num1 + num2;
//     return 0;
// }


// Calculator 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
    
//     int num1, num2;
//     char op;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//     cout << "Enter operator like (+,-,*,/,%): ";
//     cin >> op;
    
//     if (op == '+')
//     {
//         cout << "The sum is " << num1 + num2;
//     } else if (op == '-')
//     {
//         cout << "The sub is " << num1 - num2 ;
//     } else if (op == '*')
//     {
//         cout << "The mul is " << num1 * num2 ;
//     } else if (op == '/')
//     {
//         cout << "The div is " << num1 / num2 ;
//     } else if (op == '%')
//     {
//         cout << "The mod is " << num1 % num2 ;
//     } else{
//         cout << "Invalid Operator";
//     }
//     return 0;
// }

// Age chack if the age is grater then 18

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if ( age == 18 || age >= 18) {
//         cout << "Your age is more then 18";
//     } else {
//         cout << "Your age is less then 18";
//     }
//     return 0;
// }


// is number odd or even 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if ( num % 2 == 0 ){
//         cout << "The numder is even";
//     } else {
//         cout << "The number is odd";
//     }
//     return 0;
// }

// Find character lowercase or upercase

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
     
//     if (ch >= 65 && ch <= 90) {
//         cout << "The character is uppercase";
//     } else {
//         cout << "The character is lowercase";
//     }
//     return 0;
// }

// sum of number from i to n 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 10;
//     int sum = 0;
    
//     for ( int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "The sum is " << sum;
//     return 0;
    
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 10;
//     int sum = 0;
//     int i = 1;
//     while ( i<=n )
//     {
//         sum += i;
//         i++;
//     }
//     cout << "The sum is " << sum;
//     return 0; 
// }

// sum of all odd number from i ot N

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 10;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if(i % 2 != 0) {
//             sum += i;
//             cout << i << " ";
//         }
//     }
//     cout << "The sum is " << sum;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 10;
//     int sum = 0;
//     int i = 1;

//     while ( i <= n)
//     {
//         if (i % 2 != 0) {
//         cout << i << " ";
//         sum += i;  
//         }
//         i++;
//     }
//     cout << "The sum is " << sum;
//     return 0;
// }

// chack if a number is prime or not

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 11;
//     bool isPrime = true;

//     for (int i = 2; i <= n-1; i++)
//     {
//         if ( n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true) {
//         cout << "The number is prime";
//     } else {
//         cout << "The number is not prime";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 11;
//     bool isPrime = true;

//     for (int i = 2; i*i <= n; i++)
//     {
//         if ( n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true) {
//         cout << "The number is prime";
//     } else {
//         cout << "The number is not prime";
//     }
//     return 0;
// }

// sum of all number fro 1 to N which are divisible by 3

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 30;
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         if (i % 3 == 0) {
//             cout << i << " ";
//             sum += i;
//         }
//     }
//     cout << "= The sum is " << sum;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 10;
//     int sum = 0;
//     int i = 1;

//     while ( i <= n )
//     {
//         if ( i % 3 == 0)
//         {
//             cout << i << " ";
//             sum += i;
//         }
//         i++;
//     }
//     cout << "= The sum is " << sum;
//     return 0;
// }

// print factoeial of a number n

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " ";
//         fact *= i;
//     }
//     cout << "= The factorial is " << fact;
//     return 0;  
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 5;
//     int fact = 1;
//     int i = 1;

//     while (i <= n)
//     {
//         cout << i << " ";
//         fact *= i;
//         i++;
//     }
//     cout << "= The factorial is " << fact;
//     return 0;  
// }

