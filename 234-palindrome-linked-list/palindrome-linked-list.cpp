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
    bool isPalindrome(ListNode* head) {
        // will be palindrome when number of nodes are same left and right and
        // 2nd condition that number of nodes left=right
        if (head == nullptr || head->next == nullptr)
            return true;
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* prev = nullptr;
        ListNode* fwd = nullptr;
        ListNode* curr = slow;
        while (curr != nullptr) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }

        ListNode* left = head;
        ListNode* right = prev;

        while (right != nullptr) {
            if (left->val != right->val) {
                return false;
            } else {
                right=right->next;
                left=left->next;
            }
        }
        return true;
    }
};