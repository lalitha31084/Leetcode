class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mx=INT_MIN,mn;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            mn=INT_MAX;
            for(int j=i;j<n;j++){
                mn=min(mn,nums[j]);
            }    
            if((mx-mn)<=k){
                return i;
            }
        }
        return -1;
    }
};