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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sizeOfList = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            sizeOfList++;
        }
        //1,2,3,4,5, n=2
        int delNode = sizeOfList-n+1;
        ListNode* temp1 = NULL;
        ListNode* ptr = head;
        if(sizeOfList==1 || delNode==1){
            head=ptr->next;
            return head;
        }
        for(int i=1; i<delNode; i++){
            if(i==delNode-1){
                temp1=ptr->next->next;
                ptr->next=temp1;
            }else{
                ptr = ptr->next;
            }
            
        }
        return head;
    }
};
