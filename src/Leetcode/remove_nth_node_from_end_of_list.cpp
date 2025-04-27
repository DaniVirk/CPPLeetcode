#include "../headers/remove_nth_node_from_end_of_list.h"

ListNode *remove_nth_node_from_end_of_list::removeNthFromEnd(ListNode *head, int n) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr && n == 1) return nullptr;

    int length = 0;
    ListNode* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    if (n == length) {
        return head->next;
    }

    auto new_head = new ListNode(head->val);
    auto dummy_node = new_head;

    auto current_head = head->next;
    int counter = 1;

    while (current_head != nullptr) {
        if (counter == length - n) {
            current_head = current_head->next;
            counter++;
            continue;
        }
        dummy_node->next = new ListNode(current_head->val);
        dummy_node = dummy_node->next;
        counter++;
        current_head = current_head->next;
    }

    return new_head;
}
