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
        int middle = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            middle++;
        }

        middle = middle/2;

        while(middle){
            head = head->next;
            middle--;
        }
    return head;
    }
};
