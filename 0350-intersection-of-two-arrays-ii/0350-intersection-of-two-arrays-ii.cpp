class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>mp1,mp2;
        for(int i:nums1)
        {
            mp1[i]++;
        } 
        for(int i:nums2)
        {
            mp2[i]++;
        } 
        for(auto it:mp1){
            int num=it.first;
            if(mp2.count(num)){
                int cnt=min(mp1[num],mp2[num]);
                while(cnt--)
                    res.push_back(num);
            
            }
            
        } 
        return res;
    }
};