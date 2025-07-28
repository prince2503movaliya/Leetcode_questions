class Solution {
public:
    int strStr(string haystack, string needle) {
        int big = haystack.size();
        int small = needle.size();
        int ans = -1;
        for(int i = 0; i<=big - small; i++) {
            if(haystack.substr(i,small) == needle) {
                return i;
            }
        }
        return ans;
    }
};
