class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int c_max=0,
        c_min=0,
        mins=0,
        maxs=0;
        for(int x:nums){
            c_max+=x;
            maxs=max(maxs,c_max);
           if(c_max<0) c_max=0;

            c_min+=x;
            mins=min(mins,c_min);
            if(c_min>0)c_min=0;
        }

    return max(maxs,abs(mins));
        
    }
};