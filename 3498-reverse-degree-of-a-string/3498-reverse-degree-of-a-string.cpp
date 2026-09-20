class Solution {
public:
    int reverseDegree(string s) {
       int sum=0,p=1;
       for(int i=0;i<s.size();i++){
             int res=26-(s[i]-'a');
             p=res*(i+1);
             sum+=p;
       }
       return sum;
    }
};