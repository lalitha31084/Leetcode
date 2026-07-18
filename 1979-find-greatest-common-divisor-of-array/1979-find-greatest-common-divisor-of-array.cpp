class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=nums[0],l=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>l) l=nums[i];
            else if(nums[i]<s) s=nums[i];
        }
        return gcd(s,l);
       
        
    }
};