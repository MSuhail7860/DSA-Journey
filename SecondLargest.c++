// GFG Problem Link: https://practice.geeksforgeeks.org/problems/second-largest3735/1
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1;
        int secondLargest = -1;
        for(int i=0; i<arr.size(); i++){
            int current = arr[i];
            if(current > largest){
                secondLargest = largest;
                largest = current;
            }else if(current < largest && current > secondLargest){
                secondLargest = current;
            }
        }
        return secondLargest;
    }
};