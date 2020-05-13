class Solution {
public:
    string removeKdigits(string num, int k) {
        if (0 == k) {
            return num;
        }
        if (num.size() <= 1) {
            num = "0";
            return num;
        }
        int i, j;
        for (i = 0; i < k; ++i) {
            for (j = 0; j + 1 < num.size(); ++j) {
                if (num[j] > num[j + 1]) {
                    break;
                }
            }
            if (num.size() > 0) {
                num.erase(j, 1);
            }
        }
        while (num.size() > 0 && num[0] == '0') {
            num.erase(0, 1);
        }
        if (num.size() == 0) {
            num = "0";
        }
        return num;
    }
};
