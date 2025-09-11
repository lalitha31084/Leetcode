class Solution {
public:
    string sortVowels(string s) {
        vector<char>res;
        vector<int>index;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' ||s[i]=='U'){
                res.push_back(s[i]);
                index.push_back(i);
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<index.size();i++){
            s[index[i]]=res[i];
        }
        return s;

       
      
        
        
    }
};