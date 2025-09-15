class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        bool broken[26] = {false};
      for (char ch : brokenLetters)
          broken[ch - 'a'] = true;

        int count = 0;
        bool canType = true;

        for (int i = 0; i <= text.size(); ++i) {
            if (i == text.size() || text[i] == ' ') {
            if (canType) ++count;
            canType = true;
        } else if (broken[text[i] - 'a']) {
            canType = false;
        }
    }

    return count;
        
    }
};