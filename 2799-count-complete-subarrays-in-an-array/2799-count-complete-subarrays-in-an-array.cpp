class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int res=0;
        int n=nums.size();

        unordered_set<int>s1;
        for(int i=0;i<n;i++){
            s1.insert(nums[i]);
        }
        for(int i=0;i<n;i++){
             map<int,int>mp;

         for(int j = i; j < n; j++){
                mp[nums[j]]++;

            if(mp.size()==s1.size())
                res++;
        }
    }
    return res;
    }
};