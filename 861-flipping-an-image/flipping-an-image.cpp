class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
         for(auto& row:img){
            reverse(row.begin(),row.end());
            for(int i=0;i<row.size();i++){
                if(row[i]==0)
                    row[i]=1;
                else
                    row[i]=0;
            }
        }
        return img;
        
    }
};