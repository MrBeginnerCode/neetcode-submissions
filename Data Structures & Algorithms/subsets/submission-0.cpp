class Solution {
public:
    void Try(int idx, vector<int>& nums, vector <int>& path,
    vector <vector<int>>& res) {
        //BASE CASE:
        if (idx == nums.size()){
            res.push_back(path);
            return;
        }

        // MAKE CHOICE

        // TAKE
        path.push_back(nums[idx]);
        Try(idx+1,nums,path,res);
        path.pop_back();
        //SKIP
        Try(idx+1,nums,path,res);

        
    }
    vector <vector<int>> subsets(vector<int>& nums){
        vector <int> path;
        vector <vector<int>> res;
        Try(0,nums,path,res);
        return res;
    }
};
