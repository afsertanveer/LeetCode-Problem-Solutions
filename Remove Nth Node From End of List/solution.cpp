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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur ;
        cur = head ;
        int len = 0 ;
        while(cur!=NULL){
            len++;
            cur = cur->next;
        }
        cout<<len<<endl;
        if(n>len){
            return head;
        }
        if(n==len){
            cur = head->next;
            delete(head);
            head = cur ;
            return head ;
        }
        if(len==n==1){
            return NULL;
        }
        int s = len - n  + 1 ;
        int i = 0 ;
        ListNode* save;
        cur = head;
        for( int i = 0 ; i < s ; i++ ){
            save = cur ;
            cur = cur->next;
        }
        ListNode* prev;
        ListNode* cur1 ;
        prev = head ;
        cur = head->next;
        cur1 = head; 
        while(i<s){
            prev = cur1;
            cur1 = cur ;
            cur = cur->next;
            i++; 
            if(cur1==save){
                break;
            }
        }
        prev->next = cur ;
        delete(cur1);
        return head;
    }
};