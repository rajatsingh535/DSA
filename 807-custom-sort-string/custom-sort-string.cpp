class Solution {
public:
    string customSortString(string order, string s) {

        vector<int> count(26,0);

        for(char ch : s){
            count[ch - 'a']++;
        }


        string result = "";

        for(char ch : order){
            while(count[ch - 'a'] > 0){
                result += ch;
                count[ch - 'a']--;
            }
        }


        for(int i = 0; i < 26; i++){
            while(count[i] > 0){
                result += (i + 'a');
                count[i]--;
            }
        }


        return result;
        
    }
};