class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l = 0, s = 0, c= 0, freq = 0;
        for (int r = 0; r < nums.size(); r++) {
            s+= nums[r];
            if (nums[r] == 1) {
                freq = 0;
            }
            while (l <= r && s > goal) {
                s -= nums[l];
                l++;
            }
            while (l <= r && s == goal) {
                freq++;
                s-= nums[l];
                l++;
            }

            c+= freq;
        }

        return c;
    }
};