class Solution {
public:
    double get_power(double x, long long n) {
        if (n == 0)
            return 1;

        if (n < 0)
            return 1.0 / get_power(x, -n);

        double half = get_power(x, n / 2);
        return (n % 2 == 0) ? half * half : x * half * half;
    }

    double myPow(double x, int n) {

        long long N = n;
        return get_power(x, N);
    }
};
