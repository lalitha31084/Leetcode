class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(min==nums[i]){
                min++;
            }
            else{
                continue;
            }

        }
        return min;
    }
};