class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,r=sqrt(c);
        while(l<=r){
            long long s=l*l+r*r;
            if(s==c)
            return true;

            else if(s<c)
                l++;
            else 
                r--;

        }
        return false;
    }
};