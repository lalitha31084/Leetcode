class Solution {
public:
    int numJewelsInStones(string jw, string st) {
        int c=0;
    
        map<char,int>mp;
        for(int i=0;i<jw.size();i++){
            mp[jw[i]]++;
        }
        for(int i=0;i<st.size();i++){
            if(mp[st[i]]){
                c++;
            }
        }
        return c;



    }
};