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
    ListNode* oddEvenList(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        ListNode*temp1 = new ListNode(-1);
        ListNode*temp2 = new ListNode(-2);
         ListNode*temp4 = temp1;
        ListNode*temp3 = temp2;
        while(temp != NULL){
            if(cnt%2 == 0){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
            cnt++;
        }
        temp2->next = NULL;
        temp1->next = temp3->next;
        return temp4->next;

        
    }
};