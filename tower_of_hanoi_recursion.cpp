    long long toh(int N, int from, int to, int aux) 
    {
        if (N <= 0) return 0;
        int res = toh(N - 1, from, aux, to);
        std::cout << "move disk " << N << " from rod " << from << " to rod " << to << std::endl;
        return res + 1 + toh(N - 1, aux, to, from);
    }