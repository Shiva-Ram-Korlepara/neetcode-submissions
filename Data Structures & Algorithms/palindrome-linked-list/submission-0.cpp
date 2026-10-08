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
        bool result = true;
        ListNode **i = &head;
        dfs(head, result, i);
        return result;
    }

    void dfs(ListNode *node, bool &result, ListNode **i) {
        if (node->next) dfs(node->next, result, i);
        if (!result) return;
        if (node->val != (*i)->val) result = false;
        *i = (*i)->next;
    }
};