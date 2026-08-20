class Solution {
public:
    bool isFascinating(int n) {
        int n1=2*n;
        int n2=3*n;
        string res=to_string(n)+to_string(n1)+to_string(n2);
        sort(res.begin(),res.end());
        
        for(int i=1;i<res.size();i++){
            if(res[i-1]=='0') return false;
            if(res[i]-res[i-1]!=1)
                return false;
        }

        return true;;   
    }
};