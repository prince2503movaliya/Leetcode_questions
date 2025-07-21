class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;

        string result = "";
        int len = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.length(); j += len) {
                result += s[j];

                int diag = j + len - 2 * i;
                if (i != 0 && i != numRows - 1 && diag < s.length()) {
                    result += s[diag];
                }
            }
        }
        return result;
    }
};
