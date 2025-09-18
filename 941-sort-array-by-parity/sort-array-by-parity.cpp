class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>res1;
        vector<int>res2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                res1.push_back(nums[i]);
            }
            else{
                res2.push_back(nums[i]);
            }
        }
         res1.insert(res1.end(), res2.begin(), res2.end());
    return res1;
        
    }
};