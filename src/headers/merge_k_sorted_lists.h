#ifndef MERGE_K_SORTED_LISTS_H
#define MERGE_K_SORTED_LISTS_H
#include "../helper/ListNode.h"
#include <vector>

class merge_k_sorted_lists {
    ListNode* mergeTwoLists(ListNode *list1, ListNode *list2);

public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists);
};



#endif //MERGE_K_SORTED_LISTS_H
