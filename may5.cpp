//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(char c : s) {
            m[c]++;
        }
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(m[c]==1){
                return i;
            }
        }
        return -1;
    }
};

