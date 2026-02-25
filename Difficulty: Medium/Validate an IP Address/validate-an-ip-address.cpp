class Solution {
  public:
    int isValid(string &s) {
        
        int n = s.length();
        if(n == 0) return 0;
        
        int dotCount = 0;
        string temp = "";
        
        for(int i = 0; i <= n; i++) {
            
            // When we reach dot or end of string
            if(i == n || s[i] == '.') {
                
                // Empty part (like ".." or starting/ending dot)
                if(temp.length() == 0) return 0;
                
                // Leading zero check
                if(temp.length() > 1 && temp[0] == '0') return 0;
                
                // Check if all characters are digits
                for(char c : temp) {
                    if(!isdigit(c)) return 0;
                }
                
                // Convert to number
                int num = stoi(temp);
                
                // Range check
                if(num < 0 || num > 255) return 0;
                
                dotCount++;
                temp = "";
            }
            else {
                temp += s[i];
            }
        }
        
        // Must have exactly 4 parts → 3 dots → loop counts 4 segments
        return (dotCount == 4) ? 1 : 0;
    }
};