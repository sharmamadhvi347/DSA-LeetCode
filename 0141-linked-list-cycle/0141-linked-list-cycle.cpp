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
    bool hasCycle(ListNode *head) {
        int i = 0;
        ListNode* ptr = head;
        
        while(ptr != NULL){
            if(i==100000) return true;
            ptr = ptr->next;
            i++;
        }

        return false;
    }
};