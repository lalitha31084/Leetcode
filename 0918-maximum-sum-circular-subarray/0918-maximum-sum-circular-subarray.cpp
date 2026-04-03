class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int c_max=0,
        min_s=INT_MAX,
        c_min=0,
        max_s=INT_MIN,
        ts=0;
        for(int x:nums){
            c_max+=x;
            max_s=max(c_max,max_s);
            if(c_max<0) c_max=0;
            
            c_min+=x;
            min_s=min(min_s,c_min);
            if(c_min>0) c_min=0;

            ts+=x;
        }
        if(max_s<0)return max_s;
        return max(max_s,ts-min_s);
        
    }
};