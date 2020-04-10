class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        while(head != NULL){
            ListNode* n = head->next;
            head->next = pre;
            pre = head;
            head = n;
        }
        return pre;
    }
};
