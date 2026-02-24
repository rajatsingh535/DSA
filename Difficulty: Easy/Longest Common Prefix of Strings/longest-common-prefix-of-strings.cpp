class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        if(arr.size() == 0) return "";
        
        string prefix = arr[0];  // Take first string as reference
        
        for(int i = 1; i < arr.size(); i++) {
            int j = 0;
            
            // Compare characters of prefix and current string
            while(j < prefix.length() && j < arr[i].length() 
                  && prefix[j] == arr[i][j]) {
                j++;
            }
            
            // Reduce prefix length
            prefix = prefix.substr(0, j);
            
            // If prefix becomes empty, no common prefix
            if(prefix == "") return "";
        }
        
        return prefix;
    }
};