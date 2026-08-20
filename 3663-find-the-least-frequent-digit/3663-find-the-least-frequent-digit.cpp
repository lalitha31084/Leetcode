class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mp;
        int t=n;
        while(t>0){
            int d=t%10;
            mp[d]++;
            t/=10;
        }
        int mn=INT_MAX,m=0;
        for(auto& i:mp){
            if(i.second<mn){
                mn=i.second;
                m=i.first;
            }
        }
        return m;
        
    }
};