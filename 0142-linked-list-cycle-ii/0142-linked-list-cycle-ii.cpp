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
    ListNode *detectCycle(ListNode *head) {
       unordered_set<ListNode*> sett;

       while(head!=NULL){
        if(sett.count(head)){
            return head;
        }

        sett.insert(head);
        head= head->next;
       }
       return NULL;
        
    }
};