class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::set<ListNode *> set;
        while (head)
        {
            std::cout << head << std::endl;
            std::cout << set.count(head) << std::endl;
            if (set.count(head) > 0)
            {
                return true;
            }
            set.insert(head);
            head = head->next;
        }
        return false;
    }
};