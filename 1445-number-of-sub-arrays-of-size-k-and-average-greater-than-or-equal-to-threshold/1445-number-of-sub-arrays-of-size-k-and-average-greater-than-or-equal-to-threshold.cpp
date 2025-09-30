class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n=arr.size();
        int s=0,c=0;
        for(int i=0;i<k;i++){
                s+=arr[i];

        }
        if(s/k>=t) c++;
        int l=0,r=k-1;
        while(r<n-1){
            s-=arr[l];
            l++;
            r++;
            s+=arr[r];
            if(s/k>=t) c++;

        }
        
        return c;  
    }
};