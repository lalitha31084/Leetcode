class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int c = 0, n = nums.size();
        int s= 0, halfSum = 0;

        for (int num : nums) s += num;

        for (int i = 0; i < n; i++) {
            halfSum += nums[i];
            if (nums[i] == 0) {
                if (2 * halfSum == s) {
                    c += 2;
                } else if (abs(s- 2 * halfSum) == 1) {
                    c++;
                } 
            }
        }
        
        return c;
    }
};