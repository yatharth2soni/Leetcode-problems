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
        int length=0;
        ListNode *temp=head;
        
        while(temp){
            length++;
            temp=temp->next;
        }

        int res=length-n;
        if(res==0){
            return head->next;
        }
        temp=head;

        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }
            temp=temp->next;
        }

        ListNode *delNode=temp->next;
        temp->next=temp->next->next;

        delete delNode;
        return head;
    }
};