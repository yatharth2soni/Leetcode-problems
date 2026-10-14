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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0,n2=0;

        ListNode* temp=headA;

        while(temp!=NULL){
            n1++;
            temp=temp->next;
        }

        temp=headB;
        while(temp!=NULL){
            n2++;
            temp=temp->next;
        }
        int res;

        if(n2==n1){

        }

        if(n2>n1){
            res=n2-n1;

            temp=headB;
            while(res!=0){
                temp=temp->next;
                res--;
            }
            ListNode* t1=headA;
            while(temp!=NULL && t1!=NULL){
                if(temp==t1){
                    return temp;
                }
                temp=temp->next;
                t1=t1->next;
            }
        }
        else{
            res=n1-n2;

            temp=headA;
            while(res!=0){
                temp=temp->next;
                res--;
            }

            ListNode* t2=headB;

            while(t2!=NULL && temp!=NULL){
                if(t2==temp){
                    return temp;
                }
                t2=t2->next;
                temp=temp->next;
            }
        }
        return NULL;
    }
};