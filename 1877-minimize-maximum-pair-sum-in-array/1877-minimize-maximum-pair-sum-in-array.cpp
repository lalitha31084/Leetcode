class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int minn=0;
        for(int i=0;i<n;i++){
            int s=nums[i]+nums[n-i-1];
            minn=max(s,minn);
        }
        return minn;
    }
};