class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        int m = txt.length();
        int n = pat.length();
        for(int i = 0; i <= m - n; i++){
            for(int j = 0; j < n; j++){
                if(txt[i+j]!=pat[j]) break;
                if(j == n-1) return i;
            }
        }
        
        return -1;
    }
};