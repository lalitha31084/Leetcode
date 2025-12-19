class Solution {
public:
    int maxVowels(string s, int k) {
        int vc=0;
        int n=s.size();
        for(int i=0;i<k;i++){
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'){
                vc++;
            }
        }
            int res=vc;
            int i=0;
            for(int j=k;j<n;j++){
                if(s[j]=='a' ||s[j]=='e'||s[j]=='i'|| s[j]=='o'||s[j]=='u'){
                        vc++;
                 }
                  if(s[i]=='a' ||s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'){
                        vc--;
                 }
                 i++;
                 res=max(res,vc);
            }
        return res;
    }
};
