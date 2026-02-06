// Leetcode Problem 39: Combination Sum

class Solution {
public:

    void backtrack(int index, int remainingTarget, vector<int>& currentCombination, vector<vector<int>>& result, vector<int>& candidates){

        if(remainingTarget == 0){
            result.push_back(currentCombination);
            return;
        }

        if(remainingTarget < 0 || index == candidates.size()){
            return;
        }

        currentCombination.push_back(candidates[index]);
        backtrack(index, remainingTarget - candidates[index], currentCombination, result, candidates);
        currentCombination.pop_back();

        backtrack(index + 1, remainingTarget, currentCombination, result, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> result;
        vector<int> currentCombination;
        backtrack(0, target, currentCombination, result, candidates);
        return result;
    }
};