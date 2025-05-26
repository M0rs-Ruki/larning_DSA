

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


//                                                                      1 Two Sum

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         int n = nums.size();

//         for(int i = 0; i < n; i++) {

//             for(int j = i+1; j < n; j++) {

//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };



//                                                             53. Maximum Subarray

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = INT_MIN, currentSum = 0;

//         for( int val : nums ){
//             currentSum += val;
//             maxSum = max(currentSum, maxSum);
//             if (currentSum < 0 ) {
//                 currentSum = 0;
//             }
//         }
//         return maxSum;
//     }
// };




//                                                              136. Single Number

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans =  0;
//         for(int val : nums) {
//             ans = ans ^ val;
//         }
//         return ans;
//     }
// };



//                            35. Search Insert Position

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {

//         for (int i = 0; i < nums.size(); i++) {

//             if (nums[i] >= target) {
//                 return i;
//             }
//             else if (i == nums.size()-1) {
//                 return i+1;
//             }
        

//         }
//         return {} ;
//     }
// };




//                                                             169. Majority Element 

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         for(int val : nums) {
//             int count = 0;
//             for(int el : nums) {
//                 if (val == el) {
//                     count++;
//                 }
//             }
//             if(count > nums.size() / 2) {
//                 return val;
//             }
//         }
//         return -1;
//     }
// };


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         sort(nums.begin(), nums.end());

//         int freq = 1;
//         int ans = nums[0];
//         int n = nums.size(); 
//         for (int i = 1; i < n; i++)
//         {
//             if(nums[i] == nums[i-1]) {
//                 freq++;
//             }
//             else {
//                 freq = 1;
//                 ans = nums[i];
//             }

//             if(freq > n / 2) {
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };




// MOORIS voting Algo

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int fre = 0;
//         int ans = 0;
//         int n = nums.size();

//         for(int i = 0; i < n; i++) {
//             if(fre == 0) {
//                 ans = nums[i];
//             }
//             if(ans == nums[i]) {
//                 fre++;
//             }
//             else {
//                 fre--;
//             }

//         }

//         return ans;
//     }
// };