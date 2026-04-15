class Solution {
public:

    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int i = 0;
        while (i!= tokens.size()){
            auto token = tokens[i];
            if (token != "+" && token != "-" && 
            token != "*" && token != "/"){
                st.push(stoi(token));
                i++;
            }
            else {
                int total = (st.top());
                st.pop();
                if (!st.empty()){
                    int next = (st.top());
                    if (token == "+") {total += next; st.pop();st.push(total);}
                    if (token == "-") {total = next - total; st.pop();st.push(total);}
                    if (token == "*") {total *= next; st.pop();st.push(total);}
                    if (token == "/") {total = next/total; st.pop();st.push(total);}
                    cout << total << endl;
                
                }
                i++;
                
                
            }
        }
        return st.top();
    }
};
