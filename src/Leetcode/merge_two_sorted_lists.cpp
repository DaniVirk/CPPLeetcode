#include "../headers/merge_two_sorted_lists.h"
#include "../helper/ListNode.h"

ListNode *merge_two_sorted_lists::mergeTwoLists(ListNode *list1, ListNode *list2) {
    if (list1 == nullptr && list2 == nullptr) return nullptr;z
    if (list1 == nullptr && list2 != nullptr) return list2;
    if (list1 != nullptr && list2 == nullptr) return list1;

    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    list2->next = mergeTwoLists(list1, list2->next);
    return list2;
}