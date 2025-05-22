
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

// int linearSearch(int arr[], int size, int target) {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i ;
//             break;
//         }
//     }
//     return -1;
    
// }

// int main() {

//     int arr[] = { 4,5,7,8,1,2,5 };
//     int size = sizeof(arr) / sizeof(int);
//     int target = 7;

//     cout << linearSearch(arr, size, target) << endl;

    
//     return 0;
// }


// Q4
// How to reverse an Array

// #include <iostream>
// using namespace std;


// int reverseArray(int arr[], int size) {

//     int start = 0;
//     int end = size -1;
//     while (start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {

//     int arr[] = { 4,5,7,8,1,2,5 };
//     int size = sizeof(arr) / sizeof(int);

//     cout << "Before Reverse" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
    
//     }
//     cout << endl;

//     reverseArray(arr, size);

//     cout << "After Reverse" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
    
//     }
//     cout << endl;
    
//     return 0;
// }



// Problems to solve:

// Q1
// WAF to calculate sum & product of all numbers in an array.

// #include <iostream>
// using namespace std;

// int sumProduct(int arr[], int size) {
//     int sum = 0;
//     int product = 1;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//         product *= arr[i];
//     }
//     cout << "The sum is " << sum << " and product is " << product << endl;
// }

// int main() {
//     int arr[] = { 4,5,7,8,1,2,5 };
//     int size = sizeof(arr) / sizeof(int);

//     sumProduct(arr, size);
    
//     return 0;

// }

// Q2
// WAF to swap the max & min number of an array.

// #include <iostream>
// #include <climits>
// using namespace std;

// void swapMaxMin(int arr[], int size) {
//     int max = INT_MAX;
//     int min = INT_MIN;
//     int maxIndex = 0;
//     int minIndex = 0;

//     for (int i = 0; i < size; i++){

//         if( max < arr[i]) {

//             max = arr[i];
//             maxIndex = i;

//         }

//         if(min > arr[i]){

//             min = arr[i];
//             minIndex = i;

//         }

//     }
//     swap(arr[maxIndex], arr[minIndex]);
// }

// int main() {
//     int arr[] = { 4,5,7,8,1,2,5 };
//     int size = sizeof(arr) / sizeof(int);

//     cout << "Before Swap" << endl;
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " " ;
//     }
//     cout << endl;

//     swapMaxMin(arr, size);
    
//     cout << "After Swap" << endl;
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " " ;
//     }
//     cout << endl;

//     return 0;
// }




// WAF to print all the unique values in an array.

// #include <iostream>
// using namespace std;

// int uniqueValues( int arr[], int size) {


//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;

//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j] && i != j)
//             {
//                 count++;
//             }
//         }
//         if (count == 0)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main() {
//     int arr[] = { 4,1,7,4,1,2,5 };
//     int size = sizeof(arr) / sizeof(int);

//     uniqueValues(arr, size);
//     cout << "Unique Values" << endl;

//     return 0;
// }


// WAF to print intersection of 2 arrays.

// #include <iostream>
// using namespace std;

// void intersection( int arr1[], int arr2[], int size1, int size2) {

//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             if (arr1[i] == arr2[j] )
//             {
//                 cout << arr1[i] << " ";
//                 arr2[j] = -1;
//                 break;

//             }
//         }
//     }
// }

// int main(){
//     int arr1[] = { 4,1,7,8,1,2,5 };
//     int arr2[] = { 1,2,3,4,5,6,7 };
//     int size1 = sizeof(arr1) / sizeof(int);
//     int size2 = sizeof(arr2) / sizeof(int);

//     intersection(arr1, arr2, size1, size2);
//     cout << "Intersection" << endl;

//     return 0;
// }

