class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        int n=nums.size();
        while(k--){
            int min=0;
            for(int i=0;i<n;i++){
                if(nums[min]>nums[i])
                    min=i;
            }
            nums[min]*=mul;
        } 
        return nums;
        
    }
}; 