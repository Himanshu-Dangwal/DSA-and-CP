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
        
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL &&  fast->next->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                fast = head;
                
                if(slow == fast){
                    return slow;
                }
                
                while(slow->next != fast->next){
                    slow = slow->next;
                    fast = fast->next;
                }
                
                return slow->next;
            }
            
        }
        return NULL;
    }
};
