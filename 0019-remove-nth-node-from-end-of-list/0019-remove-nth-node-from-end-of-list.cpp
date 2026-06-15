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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int num = 0;
        ListNode *ptr2 = head;
        ListNode *preptr = head;
        ListNode *ptr = head;

        int count = 0;

        while(ptr != NULL){
            ptr = ptr->next;
            num++;
        }
        if(num-n == 0){
            head = head->next;
            return head;
        }

        while(count < num-n){
            preptr = ptr2;
            ptr2 = ptr2->next;
            count++;
        }

        preptr->next = ptr2->next;

        if (num==1) return 0;
        return head;
    }
};