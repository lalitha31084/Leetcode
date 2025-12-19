class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;   
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                res.push_back(i);
            }
        }

        if (res.empty())
            return {-1, -1};

        return {res.front(), res.back()};
    }
};
