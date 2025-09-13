class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int l=0,s=0,min_len=INT_MAX;
        // for(int r=0;r<nums.size();r++){
        //     s+=nums[r];

        // while(s>=target){
        //     min_len=min(min_len,r-l+1);
        //     s-=nums[l];
        //     l++;
        //     }
        // }
        // return (min_len==INT_MAX)?0:min_len;










        int sum=0,minsum=INT_MAX;
        int j=0;
        for(int i=0;i<nums.size();i++){
                sum+=nums[i];
            while(sum>=target){
                minsum=min(minsum,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(minsum==INT_MAX){
            return 0;
        }
        else{
            return minsum;
        }
        
    }
};