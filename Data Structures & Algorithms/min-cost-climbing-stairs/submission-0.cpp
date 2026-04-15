class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> step = {cost[0],cost[1]};
        for (int i = 2; i < cost.size();i++){
            step.push_back(min(cost[i]+step[i-1], cost[i] + step[i-2]));
        }
        return min(step[step.size()-1],step[step.size()-2]);
    }
};
