// Leetcode Problem 14
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())  return "";
        string prefix = strs[0];

        int n = strs.size();

        for(int i = 1; i < n; i++){
            int j=0;
            while(j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]){
                j++;
            }
            prefix =  prefix.substr(0, j);
            if(prefix.empty())  return "";
        }
        return prefix;
    }
};