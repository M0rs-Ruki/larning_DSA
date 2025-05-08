
// Pattern 

// square pattern
// Easy with number n = 4
// 1234
// 1234
// 1234
// 1234

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int row = 4;
//     int col = 4;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// in ABCD

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;

//     for (int i = 0; i < n ; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;   
// }


// n = 3
// 123
// 456
// 789

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 3;
//     int count = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
    
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;  
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Triangle patten n = 4

// * 
// * *
// * * *
// * * * *
// * * * * *

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 5;

//     for (int i = 0; i < n ; i++){

//         for(int j = 0 ; j <= i ; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// with numbers
// 1
// 22
// 333
// 4444

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j <= i; j++){
//             cout << i+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
    
// }



// 1
// 12
// 123
// 1234

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;
//     for (int i = 0; i <=n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << j+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1
// 21
// 321
// 4321

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j>0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
    
// }


// 1
// 23
// 456
// 78910

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;
//     int count = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j <= i; j++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
    

// A
// BC
// DEF
// GHIJ

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
    
// }


// 1111
//  222
//   33
//    4
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < i;j++)
//         {
//             cout << " ";
//         }

//         for(int j =0; j <n-i; j++)
//         {
//             cout << i+1;
//         }
//         cout << endl;
//     }
//     return 0;
    
// }


// pyramid pattern

//    1
//   121
//  12321
// 1234321

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j+1;
//         }
//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }
        
//         cout << endl; 
//     }
//     return 0;
    
// }



// Hollow Diamond Pattern 

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     { 
//         // Top
//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout << " ";

//         }


//         cout << "*";

//         if(i != 0){
//             // spaces

//             for (int j = 0; j < 2*i-1; j++)
//             {
//                 cout << " ";
//             }

//             cout << "*";


//         }
//         cout << endl;
//     }

//     // Bottom
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         if(i != n-2){
//             // spaces

//             for (int j = 0; j < 2*(n-i)-5; j++)
//             {
//                 cout << " ";
//             }

//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }



// ButterFly Pattern 

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n = 4;

//     // Top
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <=i; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < (n-i-1)*2; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j <=i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
    
//     // Bottom
//     for (int i = 0; i < n; i++)
//     {
//         for(int j =0; j <n-i; j++)
//         {
//             cout << "*";
//         }

//         for(int j = 0; j < i*2;j++)
//         {
//             cout << " ";
//         }

//         for(int j =0; j <n-i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;

//     }
    
// }
