class Solution {
public:
    int longestPalindrome(string s) {

        int l = s.length();

        unordered_map<char , int> mp;
        int result = 0;
        int oddFreq = 0;
        for(char &ch : s){
            mp[ch]++;
            if(mp[ch] % 2 != 0){
                oddFreq++;
            }
            else{
                oddFreq--;
            }
        }
        if(oddFreq > 0){
            return l - oddFreq + 1;
        }

        return l;
    }
};