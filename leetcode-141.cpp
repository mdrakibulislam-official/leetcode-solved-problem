/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> valid = {};
        while(head != NULL){
            
            if(valid.count(head)){
                return true;
            }else{
                valid.insert(head);
                head = head->next;
            }
        }
        return false;
    }
};
