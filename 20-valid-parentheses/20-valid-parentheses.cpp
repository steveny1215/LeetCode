class Solution {
public:
    bool isValid(string s) {
        stack<char> st;     //LIFO
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch=='{' || ch =='[' || ch=='(' ) {
                st.push(ch);
                //push to stack if it's the beginning parenthesis
                //else check if the brackets at top of stack match with the current bracket
            }else if (ch=='}' || ch ==']' || ch == ')' ){
                if (st.empty()) return false;
                char sch = st.top();
                if ( (sch=='{' && ch =='}') || (sch=='[' && ch==']') || (sch=='(' && ch==')' ) ){
                    st.pop();
                }else {
                    return false;
                }
            }else{
                return false;
            }
        }
        return st.empty();
    }
};