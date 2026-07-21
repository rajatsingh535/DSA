class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        for (int c : deck) {
            freq[c]++;
        }

        int g = 0;
        for (auto& p : freq) {
            g = gcd(g, p.second);
        }

        return g > 1;
    }
};