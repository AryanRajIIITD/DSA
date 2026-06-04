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
        ListNode* t1=head;
        ListNode* t2=head;
        for(int i=0;i<n;i++){
            t2=t2->next;
        }
        if(t2==nullptr){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        while(t2->next!=nullptr){
            
            t2=t2->next;
            t1=t1->next;
        }
        ListNode* del=t1->next;
        t1->next=t1->next->next;
        delete del;
        return head;

    }
};
