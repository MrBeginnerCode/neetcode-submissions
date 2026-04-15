class Solution {
public:
    void Try(int sum, int idx ,vector <int> &candidates, int target,
    vector <int>& path, vector <vector<int>>& res){

        if (sum == target && find(res.begin(), res.end(), path) == res.end()){
            res.push_back(path);
            return;
        }
        else if (sum > target || idx == candidates.size() ) return;

        //TAKE
        path.push_back(candidates[idx]);
        Try(sum+candidates[idx], idx+1, candidates, target,path,res);
        path.pop_back();

        //SKIP
        Try(sum, idx+1, candidates, target,path,res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <int> path;
        vector <vector<int>> res;
        vector <vector<int>> res2;
        Try(0,0,candidates,target,path,res);
        for (int i = 0; i < res.size(); i++){
            path = res[i];
            sort(path.begin(), path.end());
            if (find(res2.begin(), res2.end(), path) == res2.end()){
                res2.push_back(path);
            }

        }
        return res2;
    }
};
