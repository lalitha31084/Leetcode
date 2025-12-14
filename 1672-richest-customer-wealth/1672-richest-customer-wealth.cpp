class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=0;
        int r=accounts.size();
        for(int i=0;i<r;i++){
            int s=0;
            int c=accounts[i].size();

            for(int j=0;j<c;j++){
                s+=accounts[i][j];
            }
        maxSum=max(maxSum,s);

       }

       return maxSum;
       
        
    }
};