class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>pre(nums.size());
        long long maxx=INT_MIN;
        for(int i=0;i<nums.size(); i++){
            if(nums[i]>maxx)
                maxx =(long long )nums[i];
            pre[i]=gcd(maxx,nums[i]);
        }
        sort(pre.begin(), pre.end());
        long long s=0,res=0;
        for(int i=0; i<pre.size()/2; i++){
            res=gcd(pre[i],pre[pre.size()-i-1]);
            s+=res;
        }
        return s;
    }
};