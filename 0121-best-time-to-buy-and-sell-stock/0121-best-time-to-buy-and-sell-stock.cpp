class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int minn=nums[0],maxx=0;
        for(int i=0;i<n;i++){
            minn=min(minn,nums[i]);
            int res=nums[i]-minn;
            maxx=max(res,maxx);
           
        }
        return maxx;   
    }
};