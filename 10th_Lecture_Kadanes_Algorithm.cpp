
// Kadane's Algorithm | Maximum Subarray Sum

// subarray 

// #include <iostream>
// using namespace std;

// int main() {

//     int n = 5;
//     int arr[] = {1, 2, 3, 2, 5};

//     for (int st = 0; st < n; st++)
//     {
//         for(int end = st; end < n; end++)
//         {
//             for (int i = 0; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }




// Maximum Subarray Sum
//Brout Force approachh

// #include <iostream>
// using namespace std;

// int max(int n, int arr[]) {

//     int maxSum = INT8_MIN;
//     for(int st = 0; st < n; st++){
        
//         int correntSum = 0;
//         for(int end = st; end < n; end++) {
//             correntSum += arr[end];
//             maxSum = max(maxSum, correntSum);
//         }
//     }
//     return maxSum;
// }


// int main() {
//     int n = 5;
//     int arr[] = { 3, 4, 5, 4, -1, 7, 8};

//     cout << max(n, arr) << endl;

//     return 0;
// }


// Kadane's Algorithm
// most optimised

// #include <iostream>
// using namespace std;

// int main() {

//     int n = 5;
//     int arr[] = { 3, 4, 5, 4, -1, 7, 8};

//     int maxSum  = INT8_MIN;
//     int correntSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         correntSum += arr[i];

//         maxSum = max(maxSum, correntSum);

//         if (correntSum < 0) {
//             correntSum = 0;
//         }
         
//     }
//     cout << maxSum << endl;
    
//     return 0;

    
// }