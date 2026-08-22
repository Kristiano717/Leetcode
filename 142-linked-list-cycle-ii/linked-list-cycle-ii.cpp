class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        unordered_set<ListNode*> stt;

        while (head!=nullptr) {
            if (stt.find(head) != stt.end())
                return head;

            stt.insert(head);
            head = head->next;
        }

        return nullptr;
    }
};