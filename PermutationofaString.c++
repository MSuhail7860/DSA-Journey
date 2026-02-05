// GFG Problem Link: https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
class Solution {
public:
    void solve(string &s, vector<bool> &used, string &curr, vector<string> &ans) {
        if (curr.size() == s.size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            if (used[i]) continue;


            if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            curr.push_back(s[i]);

            solve(s, used, curr, ans);

            curr.pop_back();
            used[i] = false;
        }
    }

    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());

        vector<string> ans;
        vector<bool> used(s.size(), false);
        string curr = "";

        solve(s, used, curr, ans);
        return ans;
    }
};