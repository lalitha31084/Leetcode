class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int s=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)
                s+=nums[i];
            else break;
        }
        while(true){
            int i;
            for( i=0;i<n;i++){
                if(nums[i]==s){
                    s++;
                    break;
                }
            }
        if(i==n)
            return s;
        }
    }
};