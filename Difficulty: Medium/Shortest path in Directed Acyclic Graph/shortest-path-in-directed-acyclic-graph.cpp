class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {

        // Step 1: Build adjacency list
        vector<pair<int,int>> adj[V];
        for (auto &it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v, wt});
        }

        // Step 2: Topological sort using DFS or Kahn. (We can use DFS here)
        vector<int> vis(V, 0);
        stack<int> st;

        function<void(int)> dfs = [&](int node) {
            vis[node] = 1;
            for (auto &x : adj[node]) {
                if (!vis[x.first]) dfs(x.first);
            }
            st.push(node);
        };

        for (int i = 0; i < V; i++) {
            if (!vis[i]) dfs(i);
        }

        // Step 3: Distance array
        vector<int> dist(V, 1e9);
        dist[0] = 0;    // source = 0

        // Step 4: Relax nodes in topo order
        while (!st.empty()) {
            int node = st.top();
            st.pop();

            if (dist[node] != 1e9) {
                for (auto &p : adj[node]) {
                    int v = p.first;
                    int wt = p.second;

                    if (dist[node] + wt < dist[v]) {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        // Step 5: Replace unreachable with -1
        for (int i = 0; i < V; i++) {
            if (dist[i] == 1e9) dist[i] = -1;
        }

        return dist;
    }
};
