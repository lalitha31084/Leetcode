class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int maxs=0;
        for(int i=0;i<m;i++){
            int n=accounts[i].size();
            int s=0;
            for(int j=0;j<n;j++){
                s+=accounts[i][j];  
                maxs=max(s,maxs);

            }
        }
        return maxs;
        
    }
};