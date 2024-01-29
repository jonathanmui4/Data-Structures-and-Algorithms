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
        // Initialize a dummy node to simplify the code
        ListNode* combined = new ListNode(0);
        ListNode* current = combined;
        // Traverse both lists until 1 of them is exhausted
        while (list1 != nullptr && list2 != nullptr) {
            // If list 1 is smaller, append it's value to combined list
            // Then move list 1 forward
            // Else append value of list 2 to combined list
            // Then iterate list 2
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // If one of the lists is not exhausted, append the remaining items into combined
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // Merged list starts from combined->next
        return combined->next;
    }
};