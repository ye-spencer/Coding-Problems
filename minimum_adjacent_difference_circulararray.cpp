    int minAdjDiff(int arr[], int n)
    {    
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int val = abs(arr[(i + 1) % n] - arr[i]);
            if (val < min)
            {
                min = val;
            }
        }
        return min;
       