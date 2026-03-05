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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        //Middle of the element
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;    
        }

        //Reverse the second half
        ListNode* nextNode;
        ListNode* prev= NULL;

        while(slow!=NULL){
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        //Compare the both half
        //After reverse (1->2->2<-1)
        //(second->1->2) (first->1->2->2->1)
        ListNode* first = head;
        ListNode* second = prev;

        while(second!=NULL){
            if(first->val!= second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;

        
    }
};