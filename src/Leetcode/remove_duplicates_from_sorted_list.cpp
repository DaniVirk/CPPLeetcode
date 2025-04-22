#include "../headers/remove_duplicates_from_sorted_list.h"

#include "../helper/ListNode.h"
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

ListNode *remove_duplicates_from_sorted_list::deleteDuplicates(ListNode *head) {
    if (head == nullptr) return nullptr;

    auto new_head = new ListNode(head->val);
    auto new_current = new_head;

    ListNode* current = head->next;

    while (current != nullptr) {
        if (current->val != new_current->val) {
            new_current->next = new ListNode(current->val);
            new_current = new_current->next;
        }
        current = current->next;
    }

    return new_head;
}