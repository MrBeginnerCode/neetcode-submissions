class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int> st;
        int n = temperatures.size();
        vector <int> res(n,0);
        int i = 0;
        
        while (i != n){
            
            if (st.empty() || temperatures[i] <= temperatures[st.top()]){
                st.push(i++);
            }
            else {
                res[st.top()] = i-st.top();
                
                st.pop();
                
                if (st.empty()||temperatures[st.top()] < temperatures[i]) continue;
                else st.push(i++);
                
            }
            
        }

        while (!st.empty()){
            res[st.top()] = 0;
            st.pop();
        }
        return res;
    }
};
