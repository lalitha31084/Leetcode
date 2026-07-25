class Solution {
public:
    int maxProduct(int n) {
        int mp1=0,mp2=0;
        while(n!=0){
            int d=n%10;
            if(d>=mp1){
                mp2=mp1;
                mp1=d;
            }
            else if(d>mp2){
                mp2=d;
            }
            n/=10;
        }
        return mp1*mp2;

    }
};