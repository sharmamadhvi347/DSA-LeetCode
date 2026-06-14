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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode *ptr2 = head;
        ListNode *preptr = head;
        ListNode *ptr = head;



        int count = 0;

        while(ptr != NULL){
            ptr = ptr->next;
            n++;
        }

        while(count < n/2){
            preptr = ptr2;
            ptr2 = ptr2->next;
            count++;
        }

        return ptr2;
    }
};