class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long c=1;
        long long res=1;
        for(int i=1;i<n;i++){
           if(prices[i-1]-prices[i]==1){
                c++;
           }
           else{
             c=1;
           }
           res+=c;

        }
        return res;
    }
};