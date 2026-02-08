// Leetcode 131. Palindrome Partitioning
class Solution {
public:
    vector<vector<string>> result;
    vector<string> path;

    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    void backtrack(int start, string &s) {
        if (start == s.size()) {
            result.push_back(path);
            return;
        }

        for (int end = start; end < s.size(); end++) {
            if (isPalindrome(s, start, end)) {
                path.push_back(s.substr(start, end - start + 1));
                backtrack(end + 1, s);
                path.pop_back(); 
            }
        }
    }

    vector<vector<string>> partition(string s) {
        backtrack(0, s);
        return result;
    }
};