// Count Odd and Even elements in an array
// class Solution {
//   public:
//     pair<int, int> countOddEven(vector<int> &arr) {
//         // your code here
//         int evenCount = 0, oddCount = 0;
        
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i] % 2 == 0){
//                 evenCount++;
//             }else{
//                 oddCount++;
//             }
//         }
//         return {oddCount, evenCount};
//     }
// };


// Sum of Array Elements
// class Solution {
//   public:
//     // Function to return sum of elements
//     int arraySum(vector<int>& arr) {
//         // code here
//         int sum = 0;
        
//         for(int i=0; i < arr.size(); i++){
//             sum += arr[i];
//         }
        
//         return sum;
//     }
// };


// Reverse an Array
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//         reverse(arr.begin(), arr.end());
        
//     }
// };


// Missing in Array
// class Solution {
//   public:
//     int missingNum(vector<int>& arr) {
//         // code here
//         long long n = arr.size() + 1;
//         long long totalSum = n * (n + 1) / 2;
        
//         long long arrSum = 0;
//         for(int i=0; i<arr.size(); i++){
//             arrSum += arr[i];
//         }
        
//         return (int)(totalSum - arrSum);
//     }
// };


// Single Element 
// class Solution {
//   public:
//     int getSingle(vector<int>& arr) {
//         // code here
//         int ans = 0;
//         for(int i=0; i<arr.size(); i++){
//             ans = ans ^ arr[i];
//         }
//         return ans;
//     }
// };


// Find Minimum in Rotated Sorted Array
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int min = nums[0];        // assume first element is minimum
        
//         for(int i=1; i<nums.size(); i++){
//             if(nums[i] < min){
//                 min = nums[i];  // update minimum
//             }
//         }
//         return min;
//     }
// };


// Second Largest
// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int largest = 0;
//         int secondLargest = 0;
        
//         for(int i=0; i < arr.size(); i++){
//             int x = arr[i];
            
//             if(x > largest){
//                 secondLargest = largest;
//                 largest = x;
//             } else if(x < largest && x > secondLargest){
//                 secondLargest = x;
//             }
//         }
//         return secondLargest;
//     }
// };


// Running Sum of 1d Array
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             sum += nums[i];
//             nums[i] = sum;
//         }
//         return nums;
//     }
// };


// Largest Element in an Array
// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         // code here
//         int largest = arr[0];
//         for(int i=1; i<arr.size(); i++){
//             if(arr[i] > largest){
//                 largest = arr[i];
//             }
//         }
//         return largest;
//     }
// };


// Max Consecutive Ones
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int currentCount = 0, maxCount = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 1){
//               currentCount++;
//             }else{
//                 currentCount = 0;
//             }    
//             maxCount = max(maxCount, currentCount); 
//         }
//         return maxCount;
//     }
// };


//