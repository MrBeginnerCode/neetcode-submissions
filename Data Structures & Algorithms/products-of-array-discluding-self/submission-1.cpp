class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalfront = 1;
        int totalback = 1;
        int total = 1;
        int n = nums.size();
        vector <int> res;
        vector <int> front;
        vector <int> back;

        for (int i = 0; i < nums.size();i++){
            if (i==0) {front.push_back(nums[i]);totalfront = nums[i];}

            else {
                totalfront *= nums[i];
                front.push_back(totalfront);
            }

        }

        for (int i = n-1; i >= 0; i--){
        totalback *= nums[i];  // Tích lũy từ phải sang trái
        back.push_back(totalback);  // Push vào cuối mảng (không dùng insert nữa)
        }
    // Đảo ngược back để back[0] là suffix cho i=0, back[1] cho i=1, v.v.
        reverse(back.begin(), back.end());
        
        for (int i = 0; i < nums.size();i++){
            // auto it = nums.begin();
            if (i+1 >= nums.size()) {total = front[i-1];}
            else if (i-1<0)  {total = back[i+1];}
            else total = front[i-1]*back[i+1];
            res.push_back(total);
            
            

        }
        return res;
    }
};
