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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newList = NULL;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* newNode;
        while (cur1 != NULL && cur2 != NULL) {
            cout << "val1: " << cur1->val << " val2: " << cur2->val << endl;
            if (cur1->val > cur2->val) {
                newNode = new ListNode(cur2->val);
                cur2 = cur2->next;
            } else {
                newNode = new ListNode(cur1->val);
                cur1 = cur1->next;
            }
            if (newList == NULL) {
                newList = newNode;
            } else {
                ListNode* cur3 = newList;
                while (cur3->next != NULL) {
                    cur3 = cur3->next;
                }
                cur3->next = newNode;
            }
        }
        while(cur1 != NULL) {
            newNode = new ListNode(cur1->val);
            cur1 = cur1->next;
            if (newList == NULL) {
                newList = newNode;
            } else {
                ListNode* cur3 = newList;
                while (cur3->next != NULL) {
                    cur3 = cur3->next;
                }
                cur3->next = newNode;
            }
        }
        while(cur2 != NULL) {
            newNode = new ListNode(cur2->val);
            cur2 = cur2->next;
            if (newList == NULL) {
                newList = newNode;
            } else {
                ListNode* cur3 = newList;
                while (cur3->next != NULL) {
                    cur3 = cur3->next;
                }
                cur3->next = newNode;
            }
        }
        

        return newList;
    }
};