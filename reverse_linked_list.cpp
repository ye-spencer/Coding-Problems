class Solution 
{
public:
    ListNode* reverseList(ListNode* head) {
        if (!head)
        {
            return head;
        }

        std::vector<ListNode *> nodes;
        ListNode * curr = head;
        while(curr)
        {
            nodes.push_back(curr);
            curr = curr->next;
        }
        curr = nodes.at(nodes.size() - 1);
        head = curr;
        int size = nodes.size();
        for (int i = 2; i <= size; i++)
        {
            curr = curr->next = nodes.at(size - i);
        }
        curr->next = nullptr;
        return head;
    }
};