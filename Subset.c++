// Leetcode Problem 78: Subsets
class Solution {
public:
    void generate(int index, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans){
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[index]);
        generate(index + 1, nums, temp, ans);
        temp.pop_back();

        generate(index + 1, nums, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        generate(0, nums, temp, ans);
        return ans;
    }
};