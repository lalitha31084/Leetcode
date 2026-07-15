class Solution {
public:

    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.first==b.first) return a.second>b.second;

        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        vector<pair<int,int>>v;
        for(auto i:mp) v.push_back({i.second,i.first});
        sort(v.begin(),v.end(),cmp);

        vector<int>res;
        for(auto i:v){
            while(i.first--) res.push_back(i.second);
        }
        return res;


    //     unordered_map<int,int>mp;
    //     for(int i:nums) mp[i]++;
    //     vector<pair<int,int>>v;
    //     for(auto i:mp){
    //         v.push_back({i.second,i.first});
    //     }
    //     sort(v.rbegin(),v.rend());
    //     vector<int>res;
    //    for(auto p:v){
    //     int f=p.first;
    //     int n=p.second;
    //     while(f--) res.push_back(n);
    //    }
    //    reverse(res.begin(),res.end());
    //     return  res;

    }
};