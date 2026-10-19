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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }
        int mid = c/2;
           temp = head;
        c = -1;
       // int x = 0;
        while(temp != NULL){
            c++;
            if(mid == c){
            // x = temp -> val;
             //temp = temp->next;
            break;
            }
            temp = temp->next;
        }

        // ListNode* ans = x;

        // while(ans != NULL){

        //     ans = ans -> next;
        // }
        // return head;
        return temp;
    }
};