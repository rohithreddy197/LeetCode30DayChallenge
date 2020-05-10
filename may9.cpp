//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        for(int i=0;i<=sqrt(num);i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};
