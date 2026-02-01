// GFG Problem Link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if(n == 0) return;
        
        d = d % n;
        if(d == 0) return;
        
        reverse(arr.begin(), arr.begin() + d);
        
        reverse(arr.begin() + d, arr.end());
        
        reverse(arr.begin(), arr.end());
    }
};