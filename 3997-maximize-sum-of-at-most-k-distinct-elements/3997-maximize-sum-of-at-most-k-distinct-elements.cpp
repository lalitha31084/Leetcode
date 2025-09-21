

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> lalitha = nums;  
        vector<int> res;
        
        for (int i = nums.size() - 1; i >= 0 && res.size() < k; --i) {
            
            if (res.empty() || nums[i] != res.back()) {
                res.push_back(nums[i]);
            }
        }
        
        return res;
    }
};
