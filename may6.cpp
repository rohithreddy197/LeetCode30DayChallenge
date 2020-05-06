//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=(nums.size())/2;
        unordered_map<int,int> map;
        for(auto x:nums){
            map[x]++;
        }
        for(auto x:nums){
            if(map[x]>majority){
                return x;
            }
        }
        return 0;
    }
};
