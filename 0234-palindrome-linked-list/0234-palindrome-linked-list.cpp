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
        int length=0;
        ListNode *temp=head;
        ListNode *h=head;

        while(temp){
            length++;
            temp=temp->next;
        }
        
        if(length==1){
            return true;
        }

        int mid=length/2;
        stack<int>st;

        for(int i=0;i<mid;i++){
            st.push(h->val);
            h=h->next;
        }

        //h=h->next;

        if(length%2!=0){
            h=h->next;
        }
        while(h){
            if(st.top()!=h->val){
                return false;
            }
            st.pop();
            h=h->next;
        }

        if(st.size()==0){
            return true;
        }
        return true;
    }
};