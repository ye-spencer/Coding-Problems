public:
    bool hasCycle(ListNode *head) 
    {
        ListNode * me = head; //fast
        ListNode * nathaniel = head; //slow
        while (me && (me = me->next))
        {
            if ((me = me->next) == (nathaniel = nathaniel->next)) return true;
        }
        return false;
    }
};