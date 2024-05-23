    int maxOccured(int L[], int R[], int n, int maxx)
    {
        int res[maxx + 1];
        for (int i = 0; i < maxx + 1; i++)
        {
            res[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            res[L[i]] += 1;
            res[R[i] + 1] -= 1;
        }
        int max_count = 0;
        int curr_count = 0;
        int index = 0;
        for (int i = 0; i < maxx; i++)
        {
            curr_count += res[i];
            if (curr_count > max_count)
            {
                max_count = curr_count;
                index = i;
            }
        }
        return index;
        
    }