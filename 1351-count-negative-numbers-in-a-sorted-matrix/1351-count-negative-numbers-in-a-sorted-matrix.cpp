class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int c=0;
        for(int i=0;i<m;i++){
            int n=grid[i].size();
            for(int j=0;j<n;j++){
                if(grid[i][j]<0){
                    c++;
                }
            }
        }
        return c;
        
    }
};