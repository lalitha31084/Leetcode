class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int c=original;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==c)
                c=c*2;
        }
        return c;
    }
};