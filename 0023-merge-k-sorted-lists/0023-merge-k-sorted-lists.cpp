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
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it: lists){
            ListNode* temp = it;
            while(temp!=NULL){
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        if(pq.empty()) return NULL;
        ListNode* ans = new ListNode(pq.top());
        pq.pop();
        ListNode* mover = ans;
        while(!pq.empty()){
            ListNode* temp = new ListNode(pq.top());
            mover->next = temp;
            mover = temp;
            pq.pop();
        }
        return ans;
    }
};