//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int count[N];
        for(int i=0;i<N;i++){
            count[i]=0;
        }
        for(int i=0;i<trust.size();i++){
            count[trust[i][1]-1]++;
            count[trust[i][0]-1]--;
        }
        for(int i=0;i<N;i++){
            if(count[i]==N-1) return i+1;
        }
        return -1;
    }
};
