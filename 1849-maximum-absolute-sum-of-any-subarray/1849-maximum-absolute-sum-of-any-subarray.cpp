class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max = 0, min = 0;
        int maxsum = 0, minsum = 0;

        for (int num : nums) {
            max = std::max(num, max + num);
            maxsum = std::max(maxsum, max);

            min = std::min(num, min + num);
            minsum = std::min(minsum, min);
        }

        return std::max(maxsum, std::abs(minsum));
    }
};
