class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int t) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == t){
                res.push_back(i);
            }
        }
        return res;
        
    }
};