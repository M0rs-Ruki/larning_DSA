

// Pointers


#include <iostream>
using namespace std;

// int main() {
//     int a = 10;
//     cout<< "Address of a: " << &a << endl;
//     int* p = &a;
//     cout << "Address of p: " << p << endl;
//     cout << "Value of a using pointer p: " << &p << endl;
//     return 0;
// }





// int main() {
//     int a =  10;
//     int* p = &a;
//     cout << "Address of p: " << p << endl;
    
//     int** pp = &p;
//     cout << "Address of pp: " << pp << endl;

//     cout << **pp << endl; 

//     return 0;
// }




// int main() {

//     int** pp = NULL;

//     cout << "Address of pp: " << pp << endl;

//     return 0;
// }




// int main() {

//     int a = 5;
//     int *p = &a;
//     int **q = &p;

//     cout << *p << endl;
//     cout << **q << endl;
//     cout << p << endl;
//     cout << *q << endl;

//     return 0;
// }


// void change(int* a) {
//     *a = 20;
// }

// int main() {
//     int a = 5;

//     change(&a);
//     cout << "Value of a after change function: " << a << endl;

//     return 0;
// }



// void change(int &b) {
//     b = 20; 
// }

// int main() {
//     int a = 5;

//     change(a);
//     cout << "Value of a after change function: " << a << endl;

//     return 0;
// }



// int main() {

//     int arr[] = {1, 2, 3, 4, 5};

//     cout << "Address of arr: " << arr << endl;
//     cout <<  *arr << endl;

//     return 0;
// }



// int main() {

//     int a = 10;
//     int* p = &a;
//     cout << "Address of a: " << p << endl;
//     // p++;
//     // cout << "Address of a after incrementing pointer p: " << p << endl;
//     // cout << "Value of a: " << *p << endl;
//     p = p+2;
//     cout << "Address of a after incrementing pointer p by 1: " << p << endl;

//     return 0;
// }


// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     cout << *arr << endl;
//     cout << *(arr + 1) << endl;
//     cout << *(arr + 2) << endl;
//     cout << *(arr + 3) << endl;
//     cout << *(arr + 4) << endl;

//     return 0;
// }




// int main() {

//     int* ptr2;
//     int* ptr1 = ptr2 + 2;

//     cout << ptr1 - ptr2 << endl;

// }



// int main() {

//     int* ptr2;
//     int* ptr1;

//     cout << ptr1 << endl;
//     cout << ptr2 << endl;
//     cout << (ptr1 > ptr2) << endl;

//     return 0;
// }


int main() {

    int arr[] = {10, 20, 30, 40}; 
    int *ptr = arr;
    
    cout << *(ptr + 1) << endl; 
    cout << *(ptr + 3) << endl; 
    ptr++;
    cout << *ptr << endl;

    return 0;
}