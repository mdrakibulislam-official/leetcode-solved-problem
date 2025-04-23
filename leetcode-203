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
    ListNode* removeElements(ListNode* head, int val) {

        while(head && head->val==val){
            head = head->next;
        }
        ListNode* current = head;
        ListNode* temp;
    

        while(current && current->next){

            if(current->next->val == val){
                temp = current->next;
                current->next = current->next->next;
                delete temp;
            }else{
                current = current->next;
            }

        }
    return head;
    }
};
