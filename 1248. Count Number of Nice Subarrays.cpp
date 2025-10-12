class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, oddc = 0, c = 0;
        int ans = 0;

        while (r < n) {
            if (nums[r] % 2 != 0) {
                oddc++;
                c = 0;
            }

            while (oddc == k) {
               
                c++;
                if (nums[l] % 2 != 0)
                    oddc--;
                l++;
            }

            ans += c;
            r++;
        }

        return ans;
    }
};
