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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        if( head->next == nullptr){
            return head;
        }
        ListNode* t = head;
        ListNode* t1 = head->next;

        while(t1){
            if(t1->val == t->val){
                ListNode* temp = t1;
                t1 = temp->next;
                t->next = t1;
                delete temp;
            }
            else {
                t = t1;
                t1 = t1->next;
            }
        }
        return head;
        
    }
};