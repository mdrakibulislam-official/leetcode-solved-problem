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
        ListNode* temp = new ListNode();
        ListNode* result = temp;
        int carry = 0;

        while(l1 || l2 || carry){
            int total = 0;

            if(l1){
                total+= l1->val;
                l1 = l1->next;
            }
            if(l2){
                total += l2->val;
                l2 = l2->next;
            }
            total +=carry;
            carry = total / 10;
            int value = total%10;
            temp->next = new ListNode(value);
            temp = temp->next;
        }
        return result->next;
    }
};
