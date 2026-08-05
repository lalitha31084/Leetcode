class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        vector<int>res(2,-1);
        while(l<r){
            int a=numbers[l]+numbers[r];
            if(target==a){
                res[0]=l+1;
                res[1]=r+1;
            }
            if(a>target)
                r--;
            else
                l++;
        }
        return res;
    }
};