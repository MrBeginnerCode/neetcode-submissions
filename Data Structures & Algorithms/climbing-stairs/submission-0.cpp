class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        
        vector<int> step = {1,1};
        for (int i = 1; n-i-1 >= 0; i++){
            step.push_back(step[i-1] + step[i]);
        }
        return step[step.size()-1];


    }
};
