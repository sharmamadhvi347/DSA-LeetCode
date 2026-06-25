#include <unordered_map>
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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        ListNode *ptr1 = head;

        if(head == NULL || ptr1->next == NULL) return NULL;

        while (ptr1) {
            if (visited.count(ptr1))
                return ptr1;      // cycle starts here
            visited.insert({ptr1, true});
            ptr1 = ptr1->next;
        }

        return NULL;
        
    }
};