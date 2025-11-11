class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,zc=0,ml=0;
        for(int l=0;l<nums.size();++l)
        {
            if(nums[l]==0)
            {
                zc++;
            }
            while(zc>k)
            {
                if(nums[r]==0)
                {
                    zc--;
                 
                }
                   r++;

            }
            ml=max(ml,l-r+1);
        }
        return ml;
    }
};