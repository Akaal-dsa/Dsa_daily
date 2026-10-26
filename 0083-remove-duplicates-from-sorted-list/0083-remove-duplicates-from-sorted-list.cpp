class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* check=head;
        while(check!=nullptr && check->next!=nullptr){
            if(check->val==check->next->val){
                check->next=check->next->next;
            }
            else{
                check=check->next ;
            }
        }return head;
    }
};