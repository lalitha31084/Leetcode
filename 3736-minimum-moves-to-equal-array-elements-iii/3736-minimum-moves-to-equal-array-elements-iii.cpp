class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,n=nums.size();
        int maxi=nums[n-1];
        for(int i=0;i<n;i++){
            c+=maxi-nums[i];
        }
        return c;
    }
};