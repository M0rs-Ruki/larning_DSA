
// Prir sum 
// O(n2)

// #include<iostream>
// #include<vector>
// using namespace std;


// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans.push_back(nums[i]);
//                 ans.push_back(nums[j]);
//                 return ans;
//             }
//         }
//     }

//     return {};
// }

// int main() {

//     vector<int> nums = {1,2,3,4,5,6,7,8};
//     int target = 9;
    
//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << " " << ans[1] << endl;



//     return 0;
// }





// O(n)

// #include<iostream>
// #include<vector>
// using namespace std;


// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
//     int low = 0;
//     int high = n-1;

//     while (low < high)
//     {
//         int sum = nums[low] + nums[high];

//         if (sum < target)
//         {
//             low++;
//         }
//         else if (sum > target) {
//             high--;
//         } 
//         else {
//             ans.push_back(nums[low]);
//             ans.push_back(nums[high]);
//             return ans;
//         }
//     }
//     return {};
// }

// int main() {

//     vector<int> nums = {1,2,3,4,5,6,7,8};
//     int target = 9;
    
//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << " " << ans[1] << endl;



//     return 0;
// }

