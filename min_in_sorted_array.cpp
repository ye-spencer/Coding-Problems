    int minNumber(int arr[], int low, int high)
    {
        if (low > high) return INT_MAX;
        int mid = (low + high) / 2;
        if (arr[mid] >= arr[low])
        {
            int val = arr[low];
            int new_val = minNumber(arr, mid + 1, high);
            return (val < new_val) ? val : new_val;
        }
        else
        {
            int val = arr[mid];
            int new_val = minNumber(arr, low, mid - 1);
            return (val < new_val) ? val : new_val;
        }
        
        return INT_MIN;
    }