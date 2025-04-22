#include <iostream>

#include "src/headers/remove_duplicates_from_sorted_list.h"
#include "src/helper/ListNode.h"

using std::cout;

int main() {
    remove_duplicates_from_sorted_list rdfsl;

    auto* test = new ListNode(1);
    test->next = new ListNode(1);
    test->next->next = new ListNode(2);
    test->next->next->next = new ListNode(3);
    test->next->next->next->next = new ListNode(3);

    cout << rdfsl.deleteDuplicates(test);
    return 0;
}
