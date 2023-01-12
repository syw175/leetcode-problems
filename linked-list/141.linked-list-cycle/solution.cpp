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
    bool hasCycle(ListNode *head) {
        // Assumption that all numbers are unique
        unordered_set<int> seen;
        ListNode *curr = head;
        while (curr)
        {
            if (seen.find(curr->val) != seen.end()) return true;
            seen.insert(curr->val);
            curr = curr->next;
        }
        return false;
    }
};
