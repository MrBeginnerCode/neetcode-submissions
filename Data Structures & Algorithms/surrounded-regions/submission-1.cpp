class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue <pair<int,int>> path;
        set <pair<int,int>> visited;
        int dr[4] = {-1,1,0,0}; 
        int dc[4] = {0,0,-1,1};
        int rows = board.size(); int cols = board[0].size();

        for (int r = 0; r<rows;r++){
            for (int c=0;c<cols;c++){
                // if (()&&())
                if ((board[r][c]=='O'&&visited.count({r,c})==0)&&(r==0||c==0||r==rows-1||c==cols-1)){
                    path.push({r,c});

                    while(!path.empty()){
                        pair <int,int> coor = path.front();
                        path.pop();

                        if (visited.count(coor)==1) continue;
                        visited.insert(coor);

                        for (int i = 0; i < 4; i++){
                            int nr = coor.first + dr[i];
                            int nc = coor.second + dc[i];
                            // bool unChanged = true;
                            // if (nr<0||nc<0||nr>=rows||nc>=cols) { continue;}
                            if (nr<0||nc<0||nr>=rows||nc>=cols||visited.count({nr,nc})==1||board[nr][nc]=='X') continue;
                            path.push({nr,nc});
                            
                        }

                    }
                }
            }
        }
        for (int r = 0; r<rows;r++){
            for (int c=0;c<cols;c++){
                if (board[r][c] == 'O'&&visited.count({r,c})==0){
                    board[r][c] = 'X';
                }
            }
        }
    }
};
