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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        vector<int>arr;
        while(temp != NULL){
            arr.push_back(temp -> val);
           
            temp  = temp -> next;
        }
    int val  = 0;
    for(int i = 0;i<arr.size();i++){
        val = val*2+arr[i];
    }
    return val;
    }
};