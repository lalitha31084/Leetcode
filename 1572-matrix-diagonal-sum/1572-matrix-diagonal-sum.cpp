class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size(); // row size
        int n=mat[0].size(); // column size
        int s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                    s+=mat[i][j]; 
                if (j == n - 1 - i)
                    s += mat[i][n - 1 - i];
                    
            }
        }
         if(n%2!=0)
                s-=mat[n/2][n/2];

    
        return s;
        
    }
};