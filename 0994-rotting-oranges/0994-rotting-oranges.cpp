class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        int freshOranges = 0;
        
        // Step 1: Initialize the queue with all initially rotten oranges and count fresh oranges.
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    ++freshOranges;
                }
            }
        }
        
        if (freshOranges == 0) return 0; // No fresh oranges to begin with
        
        int minutes = 0;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        // Step 2: Perform BFS to rot adjacent fresh oranges.
        while (!q.empty()) {
            ++minutes;
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : directions) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                        --freshOranges;
                    }
                }
            }
        }
        
        return freshOranges == 0 ? minutes - 1 : -1;
    }
};
