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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        int a=0,b=0;
        while(t1!=nullptr){
            a++;
            t1=t1->next;
        }
        while(t2!=nullptr){
            b++;
            t2=t2->next;
        }
        t1=headA;
        t2=headB;
        if(a>b){
            for(int i=0;i<(a-b);i++){
                t1=t1->next;
            }
        } else {
            for(int i=0;i<(b-a);i++){
                t2=t2->next;
            }
        }
        while(t1!=nullptr){
            if(t1==t2) return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return nullptr;
    }
};
