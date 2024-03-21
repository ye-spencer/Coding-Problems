class Solution {
public:
    string multiply(string num1, string num2) 
    {
        int n1 = num1.length();
        int n2 = num2.length();
        int result[n1 + n2];
        for (int i = 0; i < n1 + n2; i++)
        {
            result[i] = 0;
        }
        for (int i = n1 - 1; i >= 0; i--) // iterating from 1s place to most significant
        {
            for (int j = n2 - 1; j >= 0; j--) // iterating from 1s place to most significant
            {
                int index = i + j;
                int temp = (num1[i] - '0') * (num2[j] - '0') + result[index + 1];
                result[index] += temp / 10;
                result[index + 1] = temp % 10;
            }
        }

        std::stringstream ss;
        bool notzero = false;
        for (int ch : result)
        {
            if (ch != 0) 
            {
                notzero = true;
            }
            if (notzero)
            {
                ss << ch;
            }
        }
        if (notzero) return ss.str();
        return "0";    
    }
};