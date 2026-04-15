class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        queue <pair<int,int>> path;
        set <pair<int,int>> visited;
        int water = 0;
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};
        for (int r = 0; r < grid.size(); r++){
            for (int c = 0; c < grid[0].size();c++){
                if (grid[r][c]==0) water++;
                if (grid[r][c]==1&&visited.count({r,c})==0){
                    path.push({r,c});
                    int s = 0;
                    while (!path.empty()){
                        pair <int,int> box = path.front();
                        path.pop();

                        if (visited.count(box)==1) continue;
                        visited.insert(box);
                        s++;

                        for (int i = 0; i < 4; i++){
                            int nr = box.first + dr[i];
                            int nc = box.second + dc[i];

                            if (nr<0||nc<0||nr>=grid.size()||nc>=grid[0].size()||grid[nr][nc]==0||visited.count({nr,nc})==1) continue;
                            path.push({nr,nc});
                            
                        }

                    }
                    if (area < s) area = s;
                }
            }
        }
        return area;
    }
};
