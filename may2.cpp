class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int a[52]={0};
        int count=0;
        for(char c : J){
            int i = int(c);
            if(i>=65 && i<=90){
                a[i-65]++;
            }
            if(i>=97 && i<=122){
                a[i-71]++;
            }
        }
        for(char c : S){
            int i=int(c);
            if(i>=65 && i<=90 && a[i-65]>0){
                count++;
            }
            if(i>=97 && i<=122 && a[i-71]>0){
                count++;
            }
        }
        return count;
    }
};
