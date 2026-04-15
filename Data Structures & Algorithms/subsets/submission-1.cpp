class Solution {
public:

    void Try(int idx, vector<int>& nums, vector<int>& path, 
    vector<vector<int>>& res){
        //base case
        if (idx == nums.size()){
            res.push_back(path);
            return;
        }

        //include
        path.push_back(nums[idx]);
        Try(idx+1, nums,path,res);
        path.pop_back();


        // exclude
        Try(idx+1, nums,path,res);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> path;
        vector <vector <int>> res;
        Try(0,nums,path,res);
        return res;
    }
};
