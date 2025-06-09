
// Selection Sort

#include <iostream>
#include <string>
#include<vector>
using namespace std;

void selection(vector<int>& arr, int n) { // O(n^2)
    
    for (int i = 0; i < n-1; i++) {
        int samll = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[samll]) {
                samll = j;
            }
        }
        swap(arr[i], arr[samll]);
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
    selection(arr,n);
    printArr(arr,n);

    return 0;
}