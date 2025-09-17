class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rev=0;
            int temp=nums[i];
            while(temp!=0){
                rev=(rev*10)+(temp%10);
               temp/= 10;
            }
            nums.push_back(rev);
        }
        set<int> s(nums.begin(),nums.end());

        return s.size();
       
        
        
    }
};