class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        const int MOD = 1e9 + 7;
        vector<long long> res;

        for (int i = 0; i < n; i++) {
            long long s = 0;
            for (int j = i; j < n; j++) {
                s += nums[j];
                res.push_back(s);
            }
        }

        sort(res.begin(), res.end());

        long long s = 0;
        for (int i = left - 1; i <= right - 1; i++) {
            s=(s + res[i]) % MOD;
        }

        return s;
    }
};
