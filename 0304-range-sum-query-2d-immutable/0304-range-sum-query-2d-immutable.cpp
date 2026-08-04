class NumMatrix {
public:
    vector<vector<int>>pre;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
         int m=matrix[0].size();
        pre = vector<vector<int>>(n, vector<int>(m, 0));
                pre[0][0]=matrix[0][0];

        for (int i = 1; i < n; i++)
            pre[i][0] = pre[i - 1][0] + matrix[i][0];

        for (int j = 1; j < m; j++)
            pre[0][j] = pre[0][j - 1] + matrix[0][j];

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=pre[row2][col2];
        if(row1>0) 
            s-=pre[row1-1][col2];
        if(col1>0)
            s-=pre[row2][col1-1];
        if(row1>0 && col1>0)
            s+=pre[row1-1][col1-1];
        return s;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */