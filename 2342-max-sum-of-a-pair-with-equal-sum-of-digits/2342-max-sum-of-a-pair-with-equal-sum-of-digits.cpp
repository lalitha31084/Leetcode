class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int res=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int s=0;
            while(n>0){
                int r=n%10;
                s+=r;
                n/=10;
            }
           if(mp.find(s) !=mp.end())
                res=max(res,mp[s]+nums[i]);
            mp[s]=max(mp[s],nums[i]);
        }
        return res;
        
    }
};