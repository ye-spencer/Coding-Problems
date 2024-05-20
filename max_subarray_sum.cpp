    long long maxSubarraySum(int arr[], int n)
    {
        long long res = INT_MIN;
        long long curr_sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if (curr_sum > res) res = curr_sum;
            if (0 > curr_sum) curr_sum = 0;
        }
        return res;
        
    }