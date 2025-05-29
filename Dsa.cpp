

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



//                                                        35. Search Insert Position

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



//                                                                  50. Pow(x, n)

// class Solution {
// public:
//     double myPow(double x, int n) {
        
//         if(n == 0) return 1.0;
//         if(x == 0) return 0.0;
//         if(x == 1) return 1.0;
//         if(x == -1 && n%2 == 0) return 1.0;
//         if(x == -1 && n%2 != 0) return -1.0;

//         long binForm = n;

//         if(binForm < 0) {
//             x = 1/x;
//             binForm = -binForm;
//         }

//         double ans = 1;

//         while (binForm > 0)
//         {
//             if(binForm % 2 == 1) {
//                 ans *=x;
//             }
//             x *= x;
//             binForm /= 2;
//         }
//         return ans;
//     }
// };


// #include <iostream>
// using namespace std;

// double myPow(double x, int n) {

//     if(n == 0) return 1.0;
//     if(x == 0) return 0.0;
//     if(x == 1) return 1.0;
//     if(x == -1 && n%2 == 0) return 1.0;
//     if(x == -1 && n%2 != 0) return -1.0;

//     long bin = n;

//     if(bin < 0) {
//         x = 1/x;
//         bin = -bin;
//     }
    
//     double ans = 1;

//     while (bin > 0)
//     {
//         if(bin % 2 == 1) {
//             ans *= x;
//         }
//         x *= x;
//         bin /= 2;
//     }
//     return ans;
// }

// int main() {
//     double x = 2;
//     int n = 5;

//     double result = myPow(x, n);
//     cout << "2^5 = " << result << endl;  // Output: 32
//     return 0;
// }



//                                              121. Best Time to Buy and Sell Stock


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int maxProfit = 0;
//         int bestBuy = prices[0];
//         int n = prices.size();

//         for(int i = 1; i < n; i++) {
//             if(prices[i] > bestBuy) {
//                 maxProfit = max(maxProfit, prices[i] - bestBuy);
//             }
//             bestBuy = min(bestBuy, prices[i]);
//         }
//         return maxProfit;
//     }
// };




//                                                      11. Container With Most Water
// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int maxWa = 0;
//         int n = height.size();

//         for (int i = 0; i < n; i++)
//         {
//             int w = 0;
//             int h = 0;
//             for(int j = i+1; j < n; j++) {
//                 w = j-i; // we are doing The index not the actual value 
//                 h = min(height[i], height[j]);
//                 maxWa = max(maxWa, w * h);
//             }
//         }
//         return maxWa;
//     }
// };



// Optimal Approach (2 pointer)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int left = 0;
//         int right = height.size()-1;
//         int maxWa = 0;

//         while (left < right)
//         {
//             int w = right - left;
//             int h = min(height[left], height[right]);
//             maxWa = max(maxWa, w * h);

//             if(height[left] < height[right]) {
//                 left++;
//             }
//             else {
//                 right--;
//             }
            
//         }
//         return maxWa;
//     }
// };




class Solution {
public:
    int maxArea(vector<int>& height) {
        
    }
};