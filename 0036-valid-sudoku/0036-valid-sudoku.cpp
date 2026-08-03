class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++){
            vector<char>res;
            for(int j=0;j<n;j++){
                if(board[i][j]!='.')
                    res.push_back(board[i][j]);
            }
            sort(res.begin(),res.end());
            for(int k=1;k<res.size();k++){
                if(res[k]==res[k-1]) return false;
            }
        }
        for(int i=0;i<n;i++){
            vector<int>res;
            for(int j=0;j<n;j++){
                if(board[j][i]!='.')
                    res.push_back(board[j][i]);
            }
            sort(res.begin(),res.end());
            for(int k=1;k<res.size();k++){
                if(res[k]==res[k-1]) return false;
            }
        }
        for(int r=0;r<n;r+=3){
            for(int c=0;c<n;c+=3){
                vector<char>res;
                for(int i=r;i<r+3;i++){
                    for(int j=c;j<c+3;j++){
                        if(board[i][j]!='.')
                            res.push_back(board[i][j]);
                    }
                }
                sort(res.begin(),res.end());
                for(int k=1;k<res.size();k++){
                    if(res[k]==res[k-1]) return false;
                }
            }
        }
        return true;
        
    }
};