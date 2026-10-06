class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0,res=0;
        for(char c:s){
            if(c=='(') o++;
            else {
                if(o>0)o--;
                else res++;
            }
        }
        return res+o; 
    }
};