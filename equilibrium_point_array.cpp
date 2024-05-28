    int equilibriumPoint(long long a[], int n) 
    {
    
        long long sum_left = 0;
        long long sum_right = 0;
        for (int i = 0; i < n; i++)
        {
            sum_left += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum_left -= a[i];
            if (sum_left == sum_right) return (i + 1);
            sum_right += a[i];
        }
        return -1;
    }