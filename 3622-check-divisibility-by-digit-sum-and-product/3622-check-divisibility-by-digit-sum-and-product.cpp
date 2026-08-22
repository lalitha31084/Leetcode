class Solution {
public:
    bool checkDivisibility(int n) {
        int t=n,s=0,p=1;
        while(n>0){
            int d=n%10;
            s+=d;
            p*=d;
            n/=10;
        }
        if(t%(s+p)==0)
            return true;
        else
            return false;
    }
};