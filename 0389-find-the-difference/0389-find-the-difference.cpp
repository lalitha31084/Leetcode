class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        for(int i:s) mp1[i]++;
        for(int i:t) mp2[i]++;
        char res;
        for(auto it :mp2){
            char ch=it.first;
            if(mp1[ch]!=mp2[ch]) return ch;
        }
        return ' ';
    }
};