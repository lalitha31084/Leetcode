class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        vector<int> res(n, 0);

        if(k == 0) return res;

        vector<int> nums = code;
        nums.insert(nums.end(), code.begin(), code.end());

        int s = 0;

        if(k > 0) {

            for(int i = 1; i <= k; i++) {
                s += nums[i];
            }

            res[0] = s;

            for(int i = 1; i < n; i++) {
                s -= nums[i];
                s += nums[i + k];

                res[i] = s;
            }
        }
        else {

            k = -k;

            for(int i = n - k; i < n; i++) {
                s += nums[i];
            }

            res[0] = s;

            for(int i = 1; i < n; i++) {
                s -= nums[i - 1 + n - k];
                s += nums[i - 1 + n];

                res[i] = s;
            }
        }

        return res;
    }
};