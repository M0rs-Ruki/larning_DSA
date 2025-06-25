
// Maximum Row Sum
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

pair<int, int> findMaxRowSum(vector<vector<int>>& mat) {
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < mat.size(); i++) {
        int sum = 0;
        for (int j = 0; j < mat[i].size(); j++) {
            sum += mat[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    return {rowIndex, maxSum};
}


pair<int, int> findMaxColumSum(vector<vector<int>>& mat) {
    int maxSum = INT_MIN;
    int columIndex = -1;

    for (int col = 0; col < mat[0].size(); col++) {
        int sum = 0;
        for (int row = 0; row < mat.size(); row++) {
            sum += mat[row][col];
        }

        if (sum > maxSum) {
            maxSum = sum;
            columIndex = col;
        }
    }

    return {columIndex, maxSum};
}


int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    auto result = findMaxRowSum(matrix);
    cout << "Row with max sum: " << result.first << ", Sum: " << result.second << endl;
    auto resultCo = findMaxColumSum(matrix);
    cout << "Column with max sum: " << resultCo.first << ", Sum: " << resultCo.second << endl;

}
