    long long int floorSqrt(long long int x) 
    {
       if (x <= 1)
       {
           return x;
       }
       long long low = 0;
       long long high = x/2;
       int ans = -1;
       while (low <= high)
       {
           long long mid = (low + high) / 2;
           long long sqr = mid * mid;
           if (sqr == x)
           {
               return mid;
           }
           else if (sqr < x)
           {
               ans = mid;
               low = mid + 1;
           }
           else
           {
               high = mid - 1;
           }
           
       }
       return ans;
    }