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
    ListNode* reverseList(ListNode* head) {
        ListNode* t2=head;
        ListNode* t1=nullptr;
        while(t2 != nullptr){
            ListNode* front = t2->next;
            t2->next=t1;
            t1=t2;
            t2=front;
        } 
        head=t1;
        return head;
    }
};
