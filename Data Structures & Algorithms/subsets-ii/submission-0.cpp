class Solution {
public:
    void Try(int idx, vector <int>& nums, vector <int>& path, 
    vector <vector<int>>& res){
        // base case
        
        if (idx == nums.size()){
            res.push_back(path);
            return;
        }
        else if (idx == nums.size() && find(res.begin(), res.end(), path) != res.end()) 
            return;
        

        // TAKE
        path.push_back(nums[idx]);
        Try(idx+1, nums,path,res);
        path.pop_back();

        // DONT TAKE
        Try(idx+1, nums,path,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector <int> path;
        vector <vector<int>> res;
        vector <vector<int>> res2;
        Try(0,nums,path,res);
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
