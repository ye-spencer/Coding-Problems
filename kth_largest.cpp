class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : k(k), pq()
    {
        for (int i : nums)
        {
            if (pq.size() < k)
            {
                pq.push(i);
            }
            else
            {
                if (i > pq.top())
                {
                    pq.pop();
                    pq.push(i);
                }
            }
        }
    }
    
    int add(int val) 
    {
        if (pq.size() < k)
        {
            pq.push(val);
            return pq.top();
        }
        if (val > pq.top())
        {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
private:
    priority_queue <int, vector<int>, greater<int>> pq;
    int k;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */