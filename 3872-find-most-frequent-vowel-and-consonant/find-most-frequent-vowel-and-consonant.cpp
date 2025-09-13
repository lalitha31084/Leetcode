class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>res;
        
        int maxV=0,maxC=0;
        for(char ch :s){
            res[ch]++;
        }
        for(auto i:res){
            if(i.first=='a' || i.first=='e' || i.first=='i' || i.first=='o' || i.first=='u'){
            maxV=max(maxV,i.second);
        }
        else{
            maxC=max(maxC,i.second);
        }
        }
        return maxC+maxV;

        
    }
};