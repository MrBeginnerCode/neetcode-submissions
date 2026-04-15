class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums[0]==0&&nums.size()>1) return false;
        if (nums[0]==0||nums.size()<=1) return true;
        int goal = nums.size()-1;
        int i = nums.size()-2;
        while (i>=0)
        {
            
            int maxLength = nums[i];
            if (maxLength >= goal-i) {goal = i;i--;}
            else i--;

        } 
        return goal == 0;
    }
};
