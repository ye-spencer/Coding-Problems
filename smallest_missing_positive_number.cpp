class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int max = 10000000;
        int doublemax = 2 * max;
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i];
            if (temp > 0)
            {
                temp = temp % max;
                if (temp <= n && temp != 0)
                {
                    arr[temp - 1] += doublemax;   
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < max)
            {
                return i + 1;
            }
        }
        return n + 1;
    } 
};