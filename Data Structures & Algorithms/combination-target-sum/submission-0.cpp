class Solution {
public:

    void Try(int sum, int idx, vector<int>& nums,vector<int>& path, 
    int target, vector <vector <int>>& res){
        //Base case
        if (sum==target){
            res.push_back(path);
            
            return;
        }
        else if (sum> target|| idx == nums.size()){
            
            return;
        }
        
        //take
        
        path.push_back(nums[idx]);
        Try(sum + nums[idx],idx, nums,path,target,res);
        path.pop_back();
        
        
    
        
        // skip
        Try(sum,idx+1, nums,path,target,res);

        

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector <vector<int>> res;
        vector <int> path;
        Try(0,0,nums,path,target,res);
        return res;
    }
};
