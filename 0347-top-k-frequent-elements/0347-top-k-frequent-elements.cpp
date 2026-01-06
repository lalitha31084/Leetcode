class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
       vector<pair<int,int>>v;
       for(auto i: mp){
        v.push_back({i.second,i.first});
       }
       sort(v.rbegin(),v.rend());
       vector<int>res;
       for(int i=0;i<k;i++){
        res.push_back(v[i].second);
       }
       return res;
        }
};