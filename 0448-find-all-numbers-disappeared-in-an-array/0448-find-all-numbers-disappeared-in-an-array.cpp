class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        
        sort(nums.begin(), nums.end());  
        
        int j = 0;
        for (int i = 1; i <= n; i++) {
          
            while (j < n && nums[j] < i) j++;

            if (j >= n || nums[j] != i) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};
