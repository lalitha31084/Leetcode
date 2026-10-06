class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        int c=0;
        for(char ch:s){
            if(ch=='('){
                res.push_back(ch);
                c++;
            }
            else if(ch==')'){
                if(c>0){
                    res.push_back(ch);
                    c--;
                }
            }
            else{
                res.push_back(ch);
            }
        }
        string ans="";
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]=='(' && c>0)c--;
            else ans.push_back(res[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;   
    }
};