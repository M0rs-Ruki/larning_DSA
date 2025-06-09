

// Insertion Sort

#include <iostream>
#include <string>
#include<vector>
using namespace std;

void insertion(vector<int>& arr, int n){ // O(n^2)

    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int pre = i-1;

        while(pre >= 0 && arr[pre] > curr) {
            arr[pre+1] = arr[pre];
            pre--;
        }
        arr[pre+1] = curr;
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
    insertion(arr,n);
    printArr(arr,n);

    return 0;
}