// Leetcode Probem 401. Binary Watch
class Solution {
public:
    vector<string> res;

    void backtrack(int turnedOn, int idx, int hour, int minute) {
        if(turnedOn == 0){
            if(hour < 12 && minute < 60){
                string time = to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute);
                res.push_back(time);
            }
            return;
        }

        for(int i = idx; i < 10; i++){
            if (i < 4){
                backtrack(turnedOn - 1, i + 1, hour | (1 << i), minute);
            }else{ 
                backtrack(turnedOn - 1, i + 1, hour, minute | (1 << (i - 4)));
            }
        }
    }

    vector<string> readBinaryWatch(int turnedOn) {
        res.clear();
        backtrack(turnedOn, 0, 0, 0);
        return res;
    }
};