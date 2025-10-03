class Solution {
  public:
    vector<string> possibleWords(vector<int> &arr) {
        // Mapping of digits to characters
        vector<string> keypad = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        vector<string> result;
        string current;

        // Recursive backtracking function
        function<void(int)> backtrack = [&](int index) {
            if (index == arr.size()) {
                result.push_back(current);
                return;
            }

            string letters = keypad[arr[index]];
            // If the digit is 0 or 1, treat as contributing empty string
            if (letters.empty()) {
                backtrack(index + 1);
                return;
            }

            for (char ch : letters) {
                current.push_back(ch);
                backtrack(index + 1);
                current.pop_back(); // backtrack
            }
        };

        backtrack(0);
        return result;
    }
};
