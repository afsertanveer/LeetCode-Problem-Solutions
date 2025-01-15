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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }

        //traditional solution

        // int mid,c=0;
        // ListNode* newNode = new ListNode();
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     temp  = temp->next;
        //     c++;
        // }
        // mid = c/2;
        // cout<<"count: "<<mid<<endl;
        // temp = head;
        // c=0;
        // while(temp!=NULL){
        //     if(c==mid){
        //         newNode = temp;
        //     }
        //     temp = temp->next;
        //     c++;
        // }
        // return newNode;

        //slow fast approach
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};