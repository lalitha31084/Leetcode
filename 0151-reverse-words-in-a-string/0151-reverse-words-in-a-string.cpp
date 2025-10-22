class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string w;
        while(ss>>w){
            v.push_back(w);
        }
        reverse(v.begin(),v.end());
        string r="";
        for(string str : v){
            r+=str+" ";
        }
        r.pop_back();
        return r;
        
    }
};