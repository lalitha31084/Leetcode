class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    //   double sum=0;
    //   int n =nums.size();
    //   for(int i=0;i<k;i++){
    //     sum+=nums[i];
    //   }
    //   double maxavg=sum;
    //   int l=0,r=k;
    //   while(r<n){
    //     sum=sum-nums[l];
    //     sum=sum+nums[r];
    //     maxavg=max(maxavg,sum);
    //      l++;
    //      r++;
    //   }
    //   return maxavg/k;

      double sum=0;
      for(int i=0;i<k;i++){
        sum+=nums[i];
      }
    double maxsum=sum;
    for(int i=k;i<nums.size();i++){
         sum = sum - nums[i - k] + nums[i];  
            maxsum = max(maxsum, sum);
        }
        return maxsum/k;
    }
};