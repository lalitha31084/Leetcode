class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size(); // row size
        int n=matrix[0].size(); // column size
        vector<vector<int>>res;
        for(int j=0;j<n;j++){
            vector<int>temp;
            for(int i=m-1;i>=0;i--){
                temp.push_back(matrix[i][j]);

            }
            res.push_back(temp);
        }
        matrix=res;
       

    }
};