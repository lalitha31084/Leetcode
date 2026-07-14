class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(mp.contains(n)) return{mp[n],i};
            mp[nums[i]]=i;
        }
        return{-1,-1};
        
    }
};