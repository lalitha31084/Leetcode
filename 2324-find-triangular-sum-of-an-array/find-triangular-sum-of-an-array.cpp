class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while (n > 1) {
            vector<int> res;
            for (int i = 0; i < n-1; i++) {  
                res.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = res;
            n--;   
        }
        return nums[0];
    }
};
