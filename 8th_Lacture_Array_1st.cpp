
// Array Data structure
// Lacture = 8


// #include <iostream>
// using namespace std;

// int main() {

//     // int mark[5]; // Insules
//     int mark[5] = {99,22,33,59,95};

//     cout << mark[0] << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int size = 5;
//     int mark[size];

//     for (int i = 0; i < size ; i++)
//     {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> mark[i];
//     }

//     for (int i = 0; i < size ; i++)
//     {
//         cout << "The mark is " <<  mark[i] << endl;
//     }
    
//     return 0;
    
// }


// Q1

// Find smallest number / largest number  in Array

// #include <iostream>
// using namespace std;

// int main() {

//     int number[] = {22,33,44,5,7,8,9};
//     int size = sizeof(number) / sizeof(int);
//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;

//     for (int i = 0; i < size; i++)
//     {

//         // if (smallest > number[i])
//         // {
//         //     smallest = number[i];
//         // }

//         smallest = min(smallest, number[i]);

//         // if (largest < number[i])
//         // {
//         //     largest = number[i];
//         // }

//         largest = max(largest, number[i]);

//     }

//     cout << "The smallest number is " << smallest << endl;
//     cout << "The largest Number is " << largest << endl;
    
//     return 0;
// }



// Q2
// Find smallest Vague index / largest Vague index  in Array

// #include <iostream>
// using namespace std;

// int main() {

//     int number[] = {22,33,44,5,7,8,9};
//     int size = sizeof(number) / sizeof(int);
//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;
//     int smallestIndex;
//     int largestIndex;


//     for (int i = 0; i < size; i++)
//     {

//         if (smallest > number[i])
//         {
//             smallest = number[i];
//             smallestIndex = i;

//         }

//         // smallest = min(smallest, number[i]);

//         if (largest < number[i])
//         {
//             largest = number[i];
//             largestIndex = i;
//         }

//         // largest = max(largest, number[i]);

//     }
//     cout << "The smallest number is " << smallest << " at index " << smallestIndex << endl;
//     cout << "The largest Number is " << largest << " at index " << largestIndex << endl;
    
//     return 0;
// }



// Q3
// linear Search 
// arr[] = { 4,5,7,8,1,2,5}   target = 8
// size 7 

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = { 4,5,7,8,1,2,5};
//     int size = sizeof(arr) / sizeof(int);
//     int target = 8;
//     bool found = false;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << "Found at index " << i << endl;
//             break;
//         } else {
//             cout << found << endl;
//         }
        
//     }
    
//     return 0;
// }

