// Leetcode problem 60: Permutation Sequence
class Solution {
public:
    string ans;
    int count = 0;
    
    void backtrack(int n, int k, string& perm, vector<bool>& used) {
        if(perm.size() == n) {
            count++;
            if(count == k) {
                ans = perm;
            }
            return;
        }
        
        for(int i = 1; i <= n; i++) {
            if(used[i]) continue;
            
            perm.push_back(i + '0');
            used[i] = true;
            
            backtrack(n, k, perm, used);
            
            if(!ans.empty()) return;
            
            used[i] = false;
            perm.pop_back();
        }
    }
    
    string getPermutation(int n, int k) {
        vector<bool> used(n + 1, false);
        string perm = "";
        backtrack(n, k, perm, used);
        return ans;
    }
};