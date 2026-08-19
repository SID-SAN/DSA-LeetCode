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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr ||
            head->next->next == nullptr)
            return head;
        ListNode* tail = head;
        ListNode* curr = head;
        int count = 1;
        while (tail->next != nullptr) {
            count++;
            tail = tail->next;
        }

        for (int i = 0; i < count / 2; i++) {
            ListNode* even = curr->next;
            curr->next = even->next;

            tail->next = even;
            tail = even;
            tail->next = nullptr;

            curr = curr->next;
        }
        return head;
    }
};