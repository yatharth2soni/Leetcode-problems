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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        if(temp==NULL||temp->next==NULL){
            return temp;
        }

        ListNode *newHead=reverseList(head->next);
        ListNode *front=head->next;
        front->next=head;
        head->next=NULL;

        return newHead;
    }
};