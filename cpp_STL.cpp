
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/// C++ STL
// STL = Standard template libraryStandard

// STL ha Mainly Four parts
//Containers
//Iterators
//Algorithms
//Functors

// Vector
// vector<int> vec;
// vector<int> vec = {1, 2};
// vector<int> vec(3, 10);
// vector<int> vec2(vec1);
// vector<int> vec = {1, 2}; 
// vector<int> vec(3, 10);
// vector<int> vec2(vec1);

// int main() {

//     vector<int> vec = {1, 2, 3, 4, 5};
//     // vec.push_back(1);
//     // vec.push_back(2);
//     // vec.push_back(3);
//     // cout << vec.capacity() << endl;
//     // cout << vec.size() << endl;

//     // erase
//     // vec.erase(vec.begin());
//     // insert
//     // vec.insert(vec.begin()+2, 10);
//     // clear
//     // vec.clear();
//     // cout << "Capacity: " << vec.capacity() << endl;
//     // empty
//     // cout << "Empty: " << vec.empty() << endl;
//     // Iterators // Imagine like a pointer
//     // vec.begin
//     // vec.end // is not n -1 its the befor val
    
//     vec.empty();
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }


// Deque: Double Ended Queue
// deque<int> d = {1, 2, 3};
// Pair
// pair<int, int> p = { 3, 5};
// pair<char, int> p = { 'a', 1 };
// pair<int, pair<char, int>> p = {1, {'a', 3}};

//Stack  // last in first out 
// stack<int> s;
// push, emplace
// top
// pop
// size
// empty
// swap

// #include <stack>;
// int main() {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout << "Size: " << s.size() << endl;
//     cout << "Top: " << s.top() << endl;
//     s.pop();
//     cout << "Top: " << s.top() << endl;
//     cout << "Size: " << s.size() << endl;
//     cout << "Empty: " << s.empty() << endl;

//     return 0;
// }


// Queue
// queue<int> q;
// push, emplace
// front
// pop
// size
// empty
// swap

// #include <queue>;

// int main() {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout << "Size: " << q.size() << endl;
//     cout << "Front: " << q.front() << endl;
//     q.pop();
//     cout << "Front: " << q.front() << endl;
//     cout << "Size: " << q.size() << endl;
//     cout << "Empty: " << q.empty() << endl;

//     return 0;

// }

// Priority Queue
// priority_queue<int> q;
// priority_queue<int, vector<int>, greater<int>> q;
// push, emplace
// top
// pop
// size
// empty

// #include <queue>

// int main() {
//     priority_queue<int> q;
//     // priority_queue<int, vector<int>, greater<int>> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout << "Size: " << q.size() << endl;
//     cout << "Top: " << q.top() << endl;
//     q.pop();
//     cout << "Top: " << q.top() << endl;
//     cout << "Size: " << q.size() << endl;
//     cout << "Empty: " << q.empty() << endl;

//     return 0;

// }



// Map
// map<string, int> m;
// m[key] = value;
// insert, emplace
// count
// erase
// find
// size, empty, erase

// #include <map>

// int main() {
//     map<string, int> m;
//     m["a"] = 1;
//     m["b"] = 2;
//     m["c"] = 3;
//     m["d"] = 4;
//     m["e"] = 5;
//     m.insert({"f", 6});
//     cout << "Size: " << m.size() << endl;
//     cout << "Empty: " << m.empty() << endl;
//     cout << "Count: " << m.count("a") << endl;
//     cout << "Count: " << m.count("z") << endl;
//     m.erase("a");
//     cout << "Size: " << m.size() << endl;
//     cout << "Empty: " << m.empty() << endl;
//     cout << "Count: " << m.count("a") << endl;
//     cout << "Count: " << m.count("z") << endl;
//     for(auto p: m) {
//         cout << p.first << " " << p.second << endl;
    
//     }
//     if(m.find("a") != m.end()) {
//         cout << "Found" << endl;
//     }
//     else {
//         cout << "Not Found" << endl;
//     }

//     return 0;
// }

