

// Sorting Algorithms


// Bubble Sort

#include <iostream>
#include <string>
#include<vector>
using namespace std;

void bubble(vector<int>& arr, int n) { // O(n^2)
    bool isSwap = false;
    for (int i = 0; i < n; i++) { // O(n)
        for(int j = 0; j < n-i-1; j++) { // O(n*n)
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) return;
    }
}

void printArr(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main() {
    int n = 5;
    vector<int> arr = {4, 1, 5, 2, 3};
    bubble(arr,n);
    printArr(arr,n);

    return 0;
}