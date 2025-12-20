class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        int m=strs.size(); // row size
        int n=strs[0].size(); //column size
        for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    c++;
                    break;
                }
            }
        }
        return c;
        
        
    }
};