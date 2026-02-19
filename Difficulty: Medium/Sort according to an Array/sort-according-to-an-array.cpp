class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        unordered_map<int,int> freq;
        freq.reserve(a1.size() * 2);

        for (int x : a1) freq[x]++;

        vector<int> res;
        res.reserve(a1.size());

        unordered_set<int> used;
        used.reserve(a2.size() * 2);

        // Put elements in the order of a2 (ignore duplicates in a2 after first time)
        for (int x : a2) {
            if (used.insert(x).second) {          // first time seeing x in a2
                auto it = freq.find(x);
                if (it != freq.end()) {
                    while (it->second--) res.push_back(x);
                    freq.erase(it);               // remaining elements not in a2 stay in map
                }
            }
        }

        // Remaining elements (not in a2) in ascending order
        vector<int> बाकी;
        बाकी.reserve(a1.size() - res.size());
        for (auto &p : freq) {
            while (p.second--) बाकी.push_back(p.first);
        }
        sort(बाकी.begin(), बाकी.end());

        res.insert(res.end(), बाकी.begin(), बाकी.end());
        a1.swap(res);
    }
};
