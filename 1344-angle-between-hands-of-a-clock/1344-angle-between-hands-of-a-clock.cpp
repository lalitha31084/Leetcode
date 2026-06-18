class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour%=12;
        double minA=minutes*6;
        double hourA=hour*30+minutes*0.5;
        double diff=abs(hourA-minA);
        return min(diff,360-diff);

        
    }
};