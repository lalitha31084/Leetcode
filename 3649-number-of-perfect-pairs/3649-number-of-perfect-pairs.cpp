class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        long long l=0,n=nums.size(),r=l+1,c=0;

        for(int i=0;i<n;i++)
            nums[i]=abs(nums[i]);

        sort(nums.begin(),nums.end());
        while(r<n){
            long long a=min(abs((long long)nums[l]-nums[r]),
            abs((long long)nums[l]+nums[r]));

            long long b=max(abs((long long)nums[l]-nums[r]),
            abs((long long)nums[l]+nums[r]));

            if(a<=min(abs((long long)nums[l]),abs((long long)nums[r])) 
                && b>=max(abs((long long)nums[l]),abs((long long)nums[r])))
            {
                c+=r-l;
                r++;
            }
            else{
                l++;
            }
        }
        return c;
    }
};