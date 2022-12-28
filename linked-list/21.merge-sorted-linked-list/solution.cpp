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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *tail = new ListNode();
        ListNode *dummy = tail;
        ListNode *head = nullptr;
        // Either or both lists are empty
        if (!list1 && !list2) return head;
        if (!list1) return list2;
        if (!list2) return list1;

        // List is non-empty
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Case where lists are uneven
        if (list1) tail->next = list1;
        if (list2) tail->next = list2;
        return dummy->next;
    }
};
