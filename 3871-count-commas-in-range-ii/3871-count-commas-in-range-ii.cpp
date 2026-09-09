class Solution {
public:
    long long countCommas(long long n) {
        long long t=0;
        long long s=1000;
        int co=1;
        while(s<=n){
            long long e=s*1000-1;
            long long c=min(n,e)-s+1;
            if(c>0)
                t+=c*co;
            co++;
            s*=1000;
        }
        
        return t;
        
    }
};