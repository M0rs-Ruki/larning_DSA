

#include <iostream>
#include <vector>
using namespace std;

//                                 1 Two Sum

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         for (int i = 0; i < nums.size(); i++) {
//             for(int j = i+1; j < nums.size(); j++) {

//                 if (nums[i] + nums[j] == target) {
//                     return {i,j};
//                 }

//             }
//         }
//         return {};
//     }
// };



//                   53. Maximum Subarray

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




//                            136. Single Number

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



// 35. Search Insert Position

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


// 
