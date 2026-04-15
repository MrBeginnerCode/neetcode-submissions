class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = 0, r = 0;
        int maxSum = nums[0];
        int curSum = 0;
        while (r<nums.size()){
            
            if (curSum < 0) {l = r; curSum = nums[r];r++;}
            else {curSum += nums[r];r++;}
            maxSum = max(curSum,maxSum);

        }
        return maxSum;
    }
};  
