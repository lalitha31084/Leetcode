class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
           for(int i:nums){
                vector<int>temp;
                while(i>0){
                    temp.push_back(i%10);
                    i/=10;
                }
                reverse(temp.begin(),temp.end());

                for(int d:temp){
                    res.push_back(d);
                }
           }
        
        return res;
        
    }
};