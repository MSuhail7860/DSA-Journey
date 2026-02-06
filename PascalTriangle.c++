// GFG Problem Link: https://www.geeksforgeeks.org/problems/pascal-triangle0652/1
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        if (n == 1) {
            return {1};
        }

        vector<int> prev = nthRowOfPascalTriangle(n - 1);
        vector<int> curr;

        curr.push_back(1);  

        for (int i = 1; i < prev.size(); i++) {
            curr.push_back(prev[i - 1] + prev[i]);
        }

        curr.push_back(1);  

        return curr;
    }
};