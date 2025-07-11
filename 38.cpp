class Solution {
public:
    string countAndSay(int n) {

        if (n == 1)
            return "1";

        string s = "1";

        for (int i = 2; i <= n; ++i) {
            string temp = "";
            int count = 1;
            for (int j = 0; j < s.size(); ++j) {
                if (j + 1 < s.size() && s[j] == s[j + 1]) {
                    count++;
                } else {
                    temp += to_string(count) + s[j];
                    count = 1;
                }
            }
            s = temp;
        }

        return s;
    }
};