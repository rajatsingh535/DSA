class Solution {
public:
    vector<string> result;
    vector<bool> used;

    void backtrack(string &s, string &current) {
        if (current.size() == s.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            // Skip already used characters
            if (used[i]) continue;

            // Skip duplicates: only use the first unused one among identical letters
            if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            current.push_back(s[i]);

            backtrack(s, current);

            // Backtrack
            current.pop_back();
            used[i] = false;
        }
    }

    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());   // important to handle duplicates
        used.assign(s.size(), false);
        string current;
        backtrack(s, current);
        return result;
    }
};
