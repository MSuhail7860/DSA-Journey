// Leetcode Problem 40: Combination Sum II
class Solution {
public:
    void backtrack(int index, int remainingTarget, vector<int>& path, vector<vector<int>>& result, vector<int>& candidates) {

        if(remainingTarget == 0){
            result.push_back(path);
            return;
        }

        if(remainingTarget < 0){
            return;
        }

        for(int i=index; i<candidates.size(); i++){
            if(i > index && candidates[i] == candidates[i-1]){
                continue;
            }
            if(candidates[i] > remainingTarget){
                break;
            }

            path.push_back(candidates[i]);
            backtrack(i + 1, remainingTarget - candidates[i], path, result, candidates);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        backtrack(0, target, path, result, candidates);
        return result;
    }
};