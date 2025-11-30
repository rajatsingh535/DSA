class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string p

        int StarPosJ = -1; // Stores the position of the last seen '*' in p
        int last_match = -1; // Stores the position in s where the last '*' began matching

        // Iterate through the string s
        while (i < s.size()){

            // Case 1: Characters match or pattern has a '?'
            if (j < p.size() && (s[i] == p[j] || p[j] == '?')){
                i++;
                j++;
            }

            // Case 2: Pattern has a '*'
            else if (j < p.size() && p[j] == '*'){
                StarPosJ = j;
                j++;
                last_match = i;
            }

            // Case 3: Mismatch, and a '*' was seen previously
            else if (StarPosJ != -1){
                j = StarPosJ + 1;
                last_match++;
                i = last_match;
            }

            // Case 4: Mismatch, and no '*' to backtrack to
            else return false;
        }

        // After string s is fully traversed, handle any remaining '*' in pattern p
        while (j < p.size() && p[j] == '*')
        j++;
        
        // Return true only if the entire pattern p has been consumed
        return j == p.size();
    }
};