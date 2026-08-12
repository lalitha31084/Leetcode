class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m1=0,m2=0;
        int f1=0,f2=0;
        for(int i=0;i<n;i++){
            if(f1>0 && nums[i]==m1){
                f1++;
            }
            else if(f2>0 && nums[i]==m2){
                f2++;
            }
            else if(f1==0){
                f1=1;
                m1=nums[i];
            }
            else if(f2==0){
                f2=1;
                m2=nums[i];
            }
            else{
                f1--;
                f2--;
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i] == m1)
                c1++;
            else if(nums[i] == m2)
                c2++;
        }
        vector<int>res;
        if(c1>n/3){
            res.push_back(m1);
        }
        if(c2>n/3){
            res.push_back(m2);
        }
        return res;
        
    }
};