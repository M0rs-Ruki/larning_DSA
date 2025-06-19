
// Digits in a number

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> digits(int n) {
    vector<int> ans;
    while (n > 0) {
        int digit = n % 10;
        ans.push_back(digit);
        n /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n = 34564;
    cout << "Digits of " << n << " are: ";
    vector<int> ans = digits(n);
    for (int digit : ans) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}