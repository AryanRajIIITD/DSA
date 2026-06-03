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
        ListNode* t1=head;
        ListNode* t2=head;
        
        while(t2!=nullptr && t2->next!=nullptr){
            t1=t1->next;
            t2=t2->next->next;
            if(t1==t2){
                t1=head;
                while(t1!=t2){
                    t1=t1->next;
                    t2=t2->next;
                }
                return t1;
            }
            
        }
        return nullptr;
    }
};
