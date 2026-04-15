class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curSum = 0;
        for (int i = 0; i < nums.size();i++){

            curSum = (max(curSum,0) + nums[i]);
            maxSum = max(curSum, maxSum);
            
        }
        return maxSum;
    }
};
