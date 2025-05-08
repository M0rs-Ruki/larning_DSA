
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     cout << "Mors is nood coder \n" ;
//     int ww = 77;
    
//     cout << ww;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int age = 000;
//     char thing = 'A';
//     float PI = 3.14;
//     bool isit = true; // 1 = true and 0 = false
//     double price = 100.99;

//     cout << sizeof(age) << endl;
//     cout << thing << endl;
//     cout << PI << endl;
//     cout << isit << endl;
//     cout << price << endl;

//     return 0;
// }

         // Type casting 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     double price = 100.99;
//     int newprice = (int)price;

//     cout << newprice << endl;

//     return 0;
// }


         // Input in C++


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout <<"The age is " << age ;
//     return 0;

// }


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


// Ternary statement 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int num;
//     cout << "Enter your age: ";
//     cin >> num;

//     cout << ( num % 2 == 0  ? "Positive" : "Negative") ;
//     return 0;
// }

// loop
// while loop

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num = 1;

//     while (num <= 10)
//     {
//         cout << num << " ";
//         num++;
//     }
//     return 0;
    
// }

// for loop

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int count = 10;
//     for (int i = 0; i <= count; i++)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// do while loop

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num = 10;
//     int i = 1;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= num);
    
//     return 0;
// }


// Nested loop

#include <iostream>
#include <string>
using namespace std;

int main() {

    int n = 5;
    for (int i = 1; i <= n; i++) {
        int num = 10;
        for (int j = 0; j < num; j++) {
            cout << "*";
        }
        cout << endl;
     
    }
    return 0;
}
