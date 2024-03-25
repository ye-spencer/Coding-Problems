class Solution {
public:
    int reverse(int x) 
    {
        bool neg;
        long y;
        if (x < 0)
        {
            neg = true;
            y = -1L * x;
        }
        else
        {
            neg = false;
            y = x;
        }
        long result = 0;
        while (y > 0)
        {
            result *= 10;
            result += (y % 10);
            y /= 10;
        }
        if (result > INT_MAX || result < INT_MIN)
        {
            return 0;
        }
        if (neg) return (result > (INT_MAX + 1L) ? 0 : -1 * result);
        return result;
    }
};