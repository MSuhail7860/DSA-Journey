// Leetcode Problem 241: Different Ways to Add Parentheses
class Solution {
public:
    bool isNumber(string s){
        for(char c : s){
            if(!isdigit(c)) return false;
        }
        return true;
    }

    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;

        if(isNumber(expression)){
            result.push_back(stoi(expression));
            return result;
        }
        for(int i=0; i<expression.size(); i++){
            char ch = expression[i];
            if(ch == '+' || ch == '-' || ch == '*'){
                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);

                vector<int> leftResult = diffWaysToCompute(left);
                vector<int> rightResult = diffWaysToCompute(right);

                for(int l : leftResult){
                    for(int r: rightResult){
                        if(ch == '+') result.push_back(l + r);
                        else if(ch == '-') result.push_back(l - r);
                        else result.push_back(l * r);
                    }
                }
            }
        }
        return result;
    }
};