class Solution {
public:
    void Try(int n, string& path, vector <string>& res,
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
        vector <string> res;
        string path;
        Try(n,path,res);
        
        
        return res;
    }
};
