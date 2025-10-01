class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int total=nb;
        int empty=nb;
        while(empty>=ne){
            int newbottles=empty/ne;
            total+=newbottles;
            empty=empty % ne +newbottles;
        }
    return total;    
        
    }
};