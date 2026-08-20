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
        ListNode* pA=headA;
        int countA=0;
        ListNode* pB=headB;
        int countB=0;

        while(pA!=nullptr){
            countA++;
            pA=pA->next;
        }
        while(pB!=nullptr){
            countB++;
            pB=pB->next;
        }

        ListNode* currlong=headA;
        ListNode* currshort=headB;
        int n=countB-countA;
        if(n<0){
            n*=-1;
        }
        else{
            currlong=headB;
            currshort=headA;        }
        for(int i=0;i<n;i++){
            currlong=currlong->next;
        }
        while(currlong!=currshort){
            currlong=currlong->next;
            currshort=currshort->next;
        }
        return currlong;
    }
};