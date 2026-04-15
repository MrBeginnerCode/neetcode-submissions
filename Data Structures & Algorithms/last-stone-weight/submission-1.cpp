class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> p;
        for (int i = 0; i<stones.size();i++ ){
            p.push(stones[i]);
        }
        while (p.size()>1){
            int stone1 = p.top();
            p.pop();
            int stone2 = p.top();
            p.pop();
            if (stone1==stone2) continue;
            else
            p.push(abs(stone1-stone2));
            
        }
        if (p.empty()) return 0;
        return p.top();
    }
};
