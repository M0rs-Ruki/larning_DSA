

// Linear Search
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


pair<int, int> linearSearch(int mat[][3],int row, int col, int key ){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] == key) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    pair<int, int> result = linearSearch(matrix, 4, 3, 11);

    if (result.first != -1) {
        cout << "Found at: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}