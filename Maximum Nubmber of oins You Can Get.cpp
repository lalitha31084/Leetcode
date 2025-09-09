class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.begin(),p.end());
        int c=0,n=p.size();
        for(int i=n/3;i<n;i+=2){
            c+=p[i];
        }
        return c;
    }
};