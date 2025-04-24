#include "../headers/merge_k_sorted_lists.h"

ListNode* merge_k_sorted_lists::mergeKLists(std::vector<ListNode*>& lists) {
    if (lists.empty()) return nullptr;

    while (lists.size() > 1) {
        std::vector<ListNode*> merged;

        for (size_t i = 0; i < lists.size(); i += 2) {
            if (i + 1 < lists.size()) {
                merged.push_back(mergeTwoLists(lists[i], lists[i + 1]));
            } else {
                merged.push_back(lists[i]);
            }
        }

        lists = std::move(merged);
    }

    return lists[0];
}

ListNode *merge_k_sorted_lists::mergeTwoLists(ListNode *list1, ListNode *list2) {
    if (list1 == nullptr && list2 == nullptr) return nullptr;
    if (list1 == nullptr && list2 != nullptr) return list2;
    if (list1 != nullptr && list2 == nullptr) return list1;

    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    list2->next = mergeTwoLists(list1, list2->next);
    return list2;
}