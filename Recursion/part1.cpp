
// #include <iostream>
// using namespace std;

// void abc() { // this is Recursion 
//     abc();
// }

// int main() {

//     return 0;
// }




#include <iostream>
using namespace std;

void printNum(int n) { // this Recursion 
    if (n == 1) {
        cout << n << " ";
        return;
    };
    cout << n << " ";
    printNum(n - 1);
};

int main() {

    printNum(5);
    return 0;
}

