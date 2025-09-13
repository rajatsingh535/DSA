class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char , int> freq;
        string vowels = "aeiou";
        unordered_set<char> vowelSet(vowels.begin(),vowels.end());
        // count freq

        for(char ch : s){
            freq[ch]++;
        }

        int maxvowel = 0 , maxcons = 0;

        for(auto &p : freq){
            char c = p.first;
            int f = p.second;
            if(vowelSet.count(c)){
                maxvowel = max(maxvowel , f);
            }
            else{
                maxcons = max(maxcons,f);
            }
        }

        return maxvowel+maxcons;


    }
};