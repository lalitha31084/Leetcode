class Solution {
public:
    int minElement(vector<int>& nums) {
       int res=INT_MAX;
       for(int num:nums){
            int s=0;
            while(num>0){
                s+=num%10;
                num/=10;
            }
            res=min(s,res);
       }
       return res;
        

    }
};