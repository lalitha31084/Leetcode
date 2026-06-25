class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target) ct++;

                int l=j-i+1;
                if(2*ct>l) res++;
            }
        }
        return res;
    }
};