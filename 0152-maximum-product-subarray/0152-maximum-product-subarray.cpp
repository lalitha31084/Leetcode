class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int p=nums[0],minp=nums[0],maxp=nums[0];
        for(int j=1;j<nums.size();j++){
            if(nums[j]<0){
                swap(maxp,minp);
            }
            maxp=max(nums[j],nums[j]*maxp);
            minp=min(nums[j],nums[j]*minp);

            p=max(p,maxp);
        }
        return p;
        
    }
};