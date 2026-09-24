class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
             int s=0;
            int num=nums[i];
            while(num>0){
                int d=num%10;
                s+=d;
                num/=10;
            }
             if(s==i) return i;
            
        }
       
        return -1;
        
    }
};