class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end(), greater<int>());
        long long s=0;
        long long des=0;
        long long res=0;
        for(int i=0;i<k;i++){
            s=h[i]-des;
            if(s>0)
                res+=s;
            else 
                break;
            des++;
        }
        return res;
    }
};