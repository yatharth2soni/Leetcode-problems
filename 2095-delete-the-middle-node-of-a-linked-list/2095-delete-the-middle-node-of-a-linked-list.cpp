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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        if(head==NULL){return head;}
        if(head->next==NULL){
            return NULL;
        }
        int cnt=0;
        ListNode* prev=head;
        while(fast!=NULL && fast->next!=NULL){
            if(cnt>0){
                prev=prev->next;
            }
            slow=slow->next;
            fast=fast->next->next;
            cnt++;
        }
        prev->next=slow->next;
        //free(slow);
        return head;
    }
};