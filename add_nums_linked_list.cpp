class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp = new ListNode(0, nullptr);
        ListNode * head = temp;
        bool overflow = false;
        int sum = 0;
        while(l1 && l2)
        {
            sum = l1->val + l2->val + overflow;
            std::cout << sum << std::endl;

            overflow = (sum >= 10);
            
            temp->next = new ListNode(sum % 10, nullptr);
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            sum = l1->val + overflow;

            overflow = (sum >= 10);
            
            temp->next = new ListNode(sum % 10, nullptr);
            temp = temp->next;
            l1 = l1->next;
        }
        while(l2)
        {
            sum = l2->val + overflow;
            overflow = (sum >= 10);
            temp->next = new ListNode(sum % 10, nullptr);
            temp = temp->next;
            l2 = l2->next;
        }
        if (overflow)
        {
            temp->next = new ListNode(1, nullptr);
        }
        return head->next;
    }
};