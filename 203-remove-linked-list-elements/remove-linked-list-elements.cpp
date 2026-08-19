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
    ListNode* removeElements(ListNode* head, int x) {
        // there are 2 conditions head & non head
        while (head != nullptr && head->val == x) {
            ListNode* temp = head;

            head = head->next;
            delete temp;
        }

        ListNode* prev = head;
        while (prev != nullptr && prev->next != nullptr) {
            if (prev ->next->val == x) {
                ListNode* temp = prev->next;
                prev->next = temp->next;
                delete temp;

            } else {
                prev = prev->next;
            }
        }
        return head;
    }
};