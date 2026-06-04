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
    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newhead=reverse(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=nullptr;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* t1=head;
        ListNode* t2=head;
        while(t2->next!=nullptr && t2->next->next!=nullptr){
            t1=t1->next;
            t2=t2->next->next;
        }
        ListNode*newhead=reverse(t1->next);
        t1=head;
        t2=newhead;
        while(t2!=nullptr){
            if(t1->val != t2->val){
                reverse(newhead);
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        reverse(newhead);
        return true;
    }
};
