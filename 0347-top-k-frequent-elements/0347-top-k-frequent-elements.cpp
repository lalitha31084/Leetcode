class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;

        vector<pair<int,int>>p;
        for(auto i:mp){
            p.push_back({i.second,i.first});
        }
        sort(p.rbegin(),p.rend());
        vector<int>res;
        for(auto i:p){
         if(res.size()<k)
            res.push_back(i.second);

        }
        return res;

        
    }
};