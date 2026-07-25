class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int d=0,md=INT_MIN;
        if(nums.size()<2) return 0;
        for(int i=1;i<nums.size();i++){
            d=nums[i]-nums[i-1];
            md=max(d,md);
        }
        return md;
    }
};