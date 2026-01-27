class Solution {
    int findPar(int x, vector<int> &parent) {
        if (parent[x] == x) return x;
        return parent[x] = findPar(parent[x], parent);
    }

  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = (int)deadline.size();

        vector<pair<int,int>> jobs; // {profit, deadline}
        jobs.reserve(n);

        int maxD = 0;
        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
            maxD = max(maxD, deadline[i]);
        }

        sort(jobs.begin(), jobs.end(), [](const auto &a, const auto &b) {
            return a.first > b.first; // profit descending
        });

        // DSU: parent[t] = latest available slot <= t
        vector<int> parent(maxD + 1);
        for (int t = 0; t <= maxD; t++) parent[t] = t;

        int cnt = 0;
        int totalProfit = 0;

        for (auto &job : jobs) {
            int p = job.first;
            int d = job.second;

            int slot = findPar(d, parent);
            if (slot > 0) {
                cnt++;
                totalProfit += p;
                parent[slot] = findPar(slot - 1, parent); // occupy slot
            }
        }

        return {cnt, totalProfit};
    }
};
