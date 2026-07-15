class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int s_even=0,s_odd=0;
       for(int i=1;i<=n*2;i++){
        if(i%2==0) s_even+=i;
        else s_odd+=i;
       }
       return gcd(s_even,s_odd);
        
    }
};