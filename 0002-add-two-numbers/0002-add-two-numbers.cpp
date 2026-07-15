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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1; 
        ListNode* temp2 = l2;
        int carry = 0;
        int newsum = temp1->val + temp2->val;
        int push;
        if(newsum>=10){
             push = newsum %10;
             newsum = newsum/10;
             carry = newsum%10;
        }
        else push = newsum;
        ListNode* ans = new ListNode(push);
        temp1 = temp1->next;
        temp2 = temp2->next;
        ListNode* temp = ans;
        while(temp1!= NULL || temp2!= NULL){
            int sum = 0;
            int x = (temp1!=NULL)?temp1->val : 0;
            int y = (temp2!=NULL)?temp2->val : 0;
            if(carry>0){
               sum = x+y+ carry;
               carry = 0;
            }
            else sum = x+y;
            int value = sum;
            if(sum>=10){
                value = sum%10;
                sum = sum/10;
                carry = sum%10;
            }
            ListNode* mover = new ListNode(value);
            temp->next = mover;
            temp = mover;
            if(temp1!= NULL) temp1 = temp1->next;
            if(temp2!= NULL) temp2 = temp2->next;
        }    
        if(carry>0){
            ListNode* left = new ListNode(carry);
            temp->next = left;
            temp = left; 
        }
        return ans;
    }
};