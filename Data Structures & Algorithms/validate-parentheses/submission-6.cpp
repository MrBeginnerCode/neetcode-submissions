# include <stack>
class Solution {
public:
    bool isValid(string s) {
        int n = s.length();

        stack <char> st;
        int i = 0;
        
        while (n--){
            if (s[i] != ')' && s[i] != ']' && s[i] != '}') st.push(s[i++]);

            else {
                if (st.empty()) return false;
                if (st.top() == '('&& s[i++] == ')' ||
                st.top() == '{'&& s[i++] == '}' ||
                st.top() == '['&& s[i++] == ']') 
                {st.pop();continue;}
                else break;
            }
        
            
            
        }
        return st.empty();
        
    }
};
