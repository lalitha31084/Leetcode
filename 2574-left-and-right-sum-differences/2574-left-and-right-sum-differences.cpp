class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
         vector<int>res(n);
         int totsum=0;
         for(int num :nums){
            totsum+=num;
         }
          int leftSum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totsum - leftSum - nums[i];
            res[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }
        
        return res;
        
    }
};