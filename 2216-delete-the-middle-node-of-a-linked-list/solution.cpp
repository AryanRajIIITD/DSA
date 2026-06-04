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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head->next;
        ListNode* t1=head;
        
        ListNode* t2=head->next->next;
        while(t2!=nullptr && t2->next!=nullptr){
        
            t1=t1->next;
            t2=t2->next->next;
        }
        ListNode* del=t1->next;
        t1->next=t1->next->next;
        delete del;
        return head;
    }
};
