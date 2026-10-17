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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* temp1;
        ListNode* temp2;
        ListNode* ok;
        ListNode* finalist;

        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->val>=list2->val){
            finalist=list2;
            ok=finalist;
            temp2=list2->next;
            temp1=list1;
        }
        else{
            finalist=list1;
            ok=finalist;
            temp1=list1->next;
            temp2=list2;
        }

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>=temp2->val){
               finalist->next=temp2;
               temp2=temp2->next;
               finalist=finalist->next;
            }
            else{
                finalist->next=temp1;
                temp1=temp1->next;
                finalist=finalist->next;
            }
        }

        while(temp2!=NULL){
            finalist->next=temp2;
            finalist=temp2;
            temp2=temp2->next;
        }

        while(temp1!=NULL){
            finalist->next=temp1;
            finalist=temp1;
            temp1=temp1->next;
        }
        return ok;
    }
};