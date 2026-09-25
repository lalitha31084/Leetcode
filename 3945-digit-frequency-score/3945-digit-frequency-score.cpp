class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        int s=0;
        while(n>0){
            int d=n%10;
            mp[d]++;
            n/=10;
        }
        for(auto i:mp){
            s+=i.first*i.second;
        }
        return s; 
    }
};