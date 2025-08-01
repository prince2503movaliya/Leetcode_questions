class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // x == reversedHalf for even digits
        // x == reversedHalf / 10 for odd digits
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
