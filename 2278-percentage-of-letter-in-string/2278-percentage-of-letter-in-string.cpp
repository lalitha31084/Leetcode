class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(char ch:s){
            if(ch==letter) c++;
        }
        int p=(c*100)/s.size();
        return p;
        
    }
};