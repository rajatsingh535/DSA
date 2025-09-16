class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact_match;
        unordered_map<string, string> case_insensitive;
        unordered_map<string, string> vowel_insensitive;

        // Helper lambdas
        auto to_lower = [](const string& word) -> string {
            string result;
            for (char c : word)
                result += tolower(c);
            return result;
        };

        auto devowel = [](const string& word) -> string {
            string result;
            for (char c : word) {
                char lc = tolower(c);
                if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u')
                    result += '*';
                else
                    result += lc;
            }
            return result;
        };

        // Step 1: Build dictionaries from the wordlist
        for (const string& word : wordlist) {
            exact_match.insert(word);

            string lower = to_lower(word);
            if (case_insensitive.find(lower) == case_insensitive.end())
                case_insensitive[lower] = word;

            string masked = devowel(word);
            if (vowel_insensitive.find(masked) == vowel_insensitive.end())
                vowel_insensitive[masked] = word;
        }

        // Step 2: Process each query
        vector<string> result;
        for (const string& query : queries) {
            if (exact_match.count(query)) {
                result.push_back(query);
            } else {
                string lower = to_lower(query);
                if (case_insensitive.count(lower)) {
                    result.push_back(case_insensitive[lower]);
                } else {
                    string masked = devowel(query);
                    if (vowel_insensitive.count(masked)) {
                        result.push_back(vowel_insensitive[masked]);
                    } else {
                        result.push_back("");
                    }
                }
            }
        }

        return result;
    }
};
