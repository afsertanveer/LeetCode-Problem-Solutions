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
        map<ListNode*, int>m;
        ListNode* cur = headA;
        while(cur!=NULL){
            m[cur]++;
            cur = cur->next;
        }
        cur = headB;
        while(cur!=NULL){
            m[cur]++;
            cur = cur->next;
        }
        for(auto p : m){
            if(p.second>1){
                return p.first;
            }
        }
        return NULL;

    }
};