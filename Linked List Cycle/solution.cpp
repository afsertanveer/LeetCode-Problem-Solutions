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
    bool hasCycle(ListNode *head) {
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast!=NULL && fast->next!=NULL){
            if(fast->next==slow || (fast == slow && slow!=head )){
                return true;
            }
            slow = slow->next;
            fast =fast->next->next;
        }
        return false;
    }
};