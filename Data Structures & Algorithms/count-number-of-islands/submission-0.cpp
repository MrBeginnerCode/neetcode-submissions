class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        set <pair<int,int>> visited;
        queue <pair<int,int>> location; 
        int dr[4] = {1,-1,0,0};
        int dc[4] = {0,0,1,-1};
        for (int r=0; r<grid.size(); r++){
            for (int c = 0; c < grid[0].size();c++){
                if (grid[r][c]=='1'&&visited.count({r,c})==0) {
                    location.push({r,c});
                    while (!location.empty()){
                        pair <int,int> box = location.front();
                        location.pop();
                        if (visited.count(box)==1) continue;
                        visited.insert({box});
                        for (int i = 0; i < 4; i++){
                            int nr = box.first + dr[i];
                            int nc = box.second + dc[i];
                            if (nr < 0 || nr >= grid.size()|| nc < 0|| nc >= grid[0].size()||grid[nr][nc]=='0'||visited.count({nr,nc})==1)
                            continue;
                            location.push({nr,nc});
                        }

                    }
                    count++;
                }
            }
        }
        return count;
    }
};
