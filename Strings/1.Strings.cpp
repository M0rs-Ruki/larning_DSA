
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int main() {
//     string str = "Hello nood Mors !!"; // dynamic => runtime resize
//     cout << str << endl;
//     str = "Hello Mors !!";
//     cout << str << endl;
//     cout << str.length() << endl;
//     cout << str.size() << endl;
//     return 0;
// }

// 344. Reverse String

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int start = 0;
//         int end = s.size() -1;
//         while (start < end) {
//             swap(s[start], s[end]);
//             start++;
//             end--;
//         }
//     }
// };

int main() {
    string str = "mors edoc";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;

}