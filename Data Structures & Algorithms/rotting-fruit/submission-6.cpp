class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int day = 0;
        int fresh = 0;
        int rotten = 0;
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};
        queue <pair<int,int>> process;
        // set <pair<int,int>> visited;
        

        for (int r = 0; r < grid.size(); r++){
            for (int c = 0; c < grid[0].size();c++){
                if (grid[r][c] == 2){
                    process.push({r,c});
                    rotten++;
                }
                if (grid[r][c] == 1) fresh++;

            }
        }
                while (!process.empty()){
                    int len = process.size();
                    for (int j = 0; j < len; j++){
                    pair <int,int> box = process.front();
                    process.pop();
                    // if (visited.count(box)==1) continue;
                    // visited.insert(box);

                    for (int i = 0; i < 4;i++){
                        int nr = box.first + dr[i];
                        int nc = box.second + dc[i];

                        if (nr < 0|| nc < 0 || nr >= grid.size()|| nc >= grid[0].size()|| grid[nr][nc]==0||grid[nr][nc]==2) continue;
                        process.push({nr,nc});
                        grid[nr][nc] = 2;
                        fresh--;
                    }
                    }
                    if (process.empty()) continue;
                    day++;
                    

                }
                
                

            
            if(fresh>0) return -1;
            return day;
        }



        
    
};
