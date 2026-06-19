class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int c=0,h=0;
        for(int i=0;i<n;i++){
            c+=gain[i];
            h=max(h,c);
        }
        return h;
    }
};