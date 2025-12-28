class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>res1,res,res2;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot)
                res1.push_back(nums[i]);
            
            else if(nums[i]==pivot)
                res.push_back(nums[i]);
            
            else
                res2.push_back(nums[i]);
            

        }
        res1.insert(res1.end(), res.begin(), res.end());
        res1.insert(res1.end(), res2.begin(), res2.end());

        return res1;

    }
};