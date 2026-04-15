class Solution {
public:
    void Try(int n, vector <char>& path, vector <vector<char>>& res,
    int open = 0, int close = 0){
        if (close == n&& open == n){
            cout << open << close << endl;
            res.push_back(path);
            return;}
        

        else if (close > n || open > n) return;
        


        //TAKE OPEN
        if (open < n) {
            
            path.push_back('(');
            Try(n,path,res,open+1,close);
            path.pop_back();
            
        }
        
       
        // TAKE CLOSE
        if (close < open){
            
            path.push_back(')');
            Try(n,path,res,open,close+1);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <vector<char>> res;
        vector <char>path;
        string path2;
        vector <string> res2;
        Try(n,path,res);
        for (int i = 0; i < res.size(); i++){
            path = res[i];
            for (int j = 0; j < path.size();j++){
                path2.push_back(path[j]);
                
            }
            res2.push_back(path2);
            path2.clear();
            
        }
        
        return res2;
    }
};
