// Leetcode Problem 90: Subsets II
class Solution {
public:
    void generate(int index, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans){
        ans.push_back(temp);

        for (int i = index; i < nums.size(); i++){
            if (i > index && nums[i] == nums[i - 1]) continue;

            temp.push_back(nums[i]);
            generate(i + 1, nums, temp, ans);
            temp.pop_back();  
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());   
        vector<vector<int>> ans;
        vector<int> temp;
        generate(0, nums, temp, ans);
        return ans;
    }
};