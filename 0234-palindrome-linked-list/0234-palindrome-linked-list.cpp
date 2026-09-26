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
    bool isPalindrome(ListNode* head) {
        ListNode *fast=head,*slow=head;

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode *first=head;
        ListNode *prev=nullptr;

        while(slow!=NULL){
            ListNode *front=slow->next;
            slow->next=prev;
            prev=slow;
            slow=front;
        }

        ListNode *curr=prev;
        ListNode *restore=nullptr;

        while(prev!=NULL){
            if(prev->val!=first->val){
                while(curr!=NULL){
                    ListNode *node=curr->next;
                    curr->next=restore;
                    restore=curr;
                    curr=node;
                }
                return false;
            }
            prev=prev->next;
            first=first->next;
        }

        return true;
    }
};