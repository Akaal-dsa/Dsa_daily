
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* curr = head;
        int n = 1;

        // Find length and tail
        while (curr->next != nullptr) {
            curr = curr->next;
            n++;
        }

        // Avoid unnecessary rotations
        k = k % n;

        if (k == 0)
            return head;

        // Connect tail to head to form a circle
        curr->next = head;

        // Find the new tail
        int steps = n - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // Break the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
