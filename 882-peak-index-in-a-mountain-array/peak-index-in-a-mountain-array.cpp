class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                res=i;
            }
        }
        return res;
    }
};