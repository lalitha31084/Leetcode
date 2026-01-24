class Solution {
public:
    long long countVowels(string s) {
        long long c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c+=(i+1)*(s.size()-i);
            }
        }
        return c;
        
    }
};