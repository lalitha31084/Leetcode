class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n=cp.size();
        int lsum=0,rsum=0,maxSum=0;
        for(int i=0;i<k;i++){
            lsum+=cp[i];
            maxSum=lsum;
        }
        int rindex=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cp[i];
            rsum+=cp[rindex];
            rindex--;
            maxSum=max(maxSum,lsum+rsum);
        }
        return maxSum;























        // for(int i=l; i<r; i++){
        //     s+=cp[i];
        // }
        // while(r<n){
        //     s-=cp[l];
        //     l++;
        //     r++;
        //     s+=cp[r];
        //     maxSum=max(maxSum,s);
        // }
        
        // return maxSum;
        
        
    }
};