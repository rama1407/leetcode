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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        struct compare{
            bool operator()(ListNode* a,ListNode* b) {
                return a->val>b->val;
            }
        };
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        ListNode* ans = new ListNode(0);
        ListNode* mover = ans;
        for(auto it:lists){
            if(it!=NULL) pq.push(it);
        }
        while(!pq.empty()){
            ListNode* node = pq.top();
            pq.pop();
            ListNode* temp = new ListNode(node->val);
            mover->next = temp;
            mover = temp;
            if(node->next!=NULL) pq.push(node->next);
        }
        if(ans->next==NULL) return NULL;
        return ans->next;
    }
};