class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mp=0,m=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i-1]>prices[i])
                m=min(m,prices[i]);
            else
                mp=max(mp,prices[i]-m);  
        }
        return mp;

        
    }
};