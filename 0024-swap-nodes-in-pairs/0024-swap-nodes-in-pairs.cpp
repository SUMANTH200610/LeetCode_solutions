// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {

//     ListNode* temp = head;
    
//      ListNode* first = temp;
//     if (head == NULL || head->next == NULL) {
//     return head;
// }
//      ListNode* second = temp->next;
//      ListNode* remaining = second->next;
     
//       temp = second;

//         while (first != NULL && first->next != NULL) {
//             second = first->next;
//             remaining = second->next;

//             second->next = first;
//             first->next = remaining;

//             if (remaining == NULL || remaining->next == NULL)
//                 break;

//             first = remaining;
//         }
//         return temp;
//     }
// };
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;
        ListNode* first = head;
        ListNode* second = first->next;
        ListNode* remaining = second->next;

        temp = second;

        while (first != NULL && first->next != NULL) {
            second = first->next;
            remaining = second->next;

            second->next = first;
            first->next = remaining;

            if (remaining == NULL || remaining->next == NULL) {
                break;
            }

            first->next = remaining->next;
            first = remaining;
        }

        return temp;
    }
};