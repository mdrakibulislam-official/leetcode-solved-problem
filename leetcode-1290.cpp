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
        int len = 0;
        while(temp->next != NULL){
            len++;
            temp = temp->next;
        }
        
        int integer = 0;

        while(head != NULL){
            int bit = pow(2,len)*head->val;
            integer = integer + bit;
            head = head->next;
            len--;
        }
        return integer;    
    }
};
