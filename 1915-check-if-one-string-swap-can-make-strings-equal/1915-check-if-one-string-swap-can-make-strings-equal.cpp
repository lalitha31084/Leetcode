class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        char a,b;
        int flag=1,ch=0,c=0;
        if(s1==s2) return true;
        if(s1.size()!=s2.size()) return false;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                c++;
                if(flag==1)
               {     a=s1[i];
                    b=s2[i];
                    flag=0;
                    ch=1;
                    continue;}
                    else{
                        if(a!=s2[i] or b!=s1[i]){
                            return false;
                        }
                    }
                    
            }
            if(c==3) return false;
           
        }
        if(c==2) return true;
        else
        return false;
    }
};