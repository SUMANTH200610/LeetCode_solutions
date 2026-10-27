/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        int sum = 0,rem = 0,ve = 0;
        while(l1 != NULL || l2 != NULL){
            sum = 0;
            if(l1 != NULL && l2 != NULL){
                
                sum += l1->val + l2->val +rem;
                rem = sum/10;
                ve = sum%10;

            }
            else if(l1 != NULL && l2 == NULL){
                sum += l1->val + 0 + rem;
                rem = sum/10;
                ve = sum%10;
            }
            else{
                sum += 0+ l2->val+ rem;
                rem = sum/10;
                ve = sum%10;
            }
            temp -> next = new ListNode(ve);
            temp = temp->next;
             if(l1 != NULL && l2 != NULL){
                l1 = l1->next;
                l2 = l2->next;
             }
             else if(l1 != NULL && l2 == NULL){
                l1 = l1->next;
             }
             else{
                l2 = l2->next;
             }

        }
            if(rem != 0) temp->next =new ListNode(rem);

        return head->next;
    }
};