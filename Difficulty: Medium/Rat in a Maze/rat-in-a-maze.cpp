class Solution {
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        int n = maze.size();
        vector<string> ans;
        
        if (maze[0][0] == 0) 
            return ans;
        
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vis[0][0] = 1;

        // DFS lambda
        function<void(int,int,string)> dfs = [&](int x, int y, string path) {
            
            if (x == n-1 && y == n-1) {
                ans.push_back(path);
                return;
            }

            int dx[4] = {1, 0, 0, -1};
            int dy[4] = {0, -1, 1, 0};
            char dir[4] = {'D', 'L', 'R', 'U'};

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                    !vis[nx][ny] && maze[nx][ny] == 1) {

                    vis[nx][ny] = 1;
                    dfs(nx, ny, path + dir[i]);
                    vis[nx][ny] = 0;   // backtrack
                }
            }
        };

        dfs(0, 0, "");

        sort(ans.begin(), ans.end());
        return ans;
    }
};
