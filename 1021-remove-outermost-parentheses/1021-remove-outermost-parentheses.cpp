class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int n=s.size(),c=0;
        for(char ch:s){
            if(ch=='('){
                if(c>0) res.push_back(ch);
                c++;
            }
            else{
                c--;
                if(c>0) res.push_back(ch);
            }
        }
        return res;
        
    }
};