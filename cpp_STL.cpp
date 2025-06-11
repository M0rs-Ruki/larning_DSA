
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

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // cout << vec.capacity() << endl;
    // cout << vec.size() << endl;

    // erase
    // vec.erase(vec.begin());
    // insert
    // vec.insert(vec.begin()+2, 10);
    // clear
    // vec.clear();
    // cout << "Capacity: " << vec.capacity() << endl;
    // empty
    // cout << "Empty: " << vec.empty() << endl;
    // Iterators // Imagine like a pointer
    // vec.begin
    // vec.end // is not n -1 its the befor val
    
    vec.empty();
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}