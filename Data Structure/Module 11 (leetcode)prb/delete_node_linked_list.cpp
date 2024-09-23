//just give me only node ..
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *deletenode = node->next;
        node->next = node->next->next;
        delete deletenode;
    }
};