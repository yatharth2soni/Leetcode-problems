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
    ListNode* findNode(ListNode* head,int k){
        int cnt=1;
        while(cnt!=k){
            head=head->next;
            cnt++;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail=head;

        if(head==NULL||head->next==NULL||k==0){
            return head;
        }

        int len=1;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        
        if(k%len==0){
            return head;
        }

        tail->next=head;

        k=k%len;
        ListNode* lastNode=findNode(head,len-k);

        head=lastNode->next;
        lastNode->next=NULL;

        return head;
    }
};