class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* first = head;
                ListNode* second = slow;

                while (first != second) {
                    first = first->next;
                    second = second->next;
                }

                return first;
            }
        }

        return nullptr;
    }
};