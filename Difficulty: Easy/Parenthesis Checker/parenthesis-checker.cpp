class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        
        for(char c : s) {
            // If opening bracket, push to stack
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // If closing bracket but stack empty → unbalanced
                if(st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                // Check if matching pair
                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        // Balanced only if stack is empty
        return st.empty();
    }
};
