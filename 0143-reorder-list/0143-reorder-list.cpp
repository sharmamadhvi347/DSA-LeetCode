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
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *ptr = head;
        stack <ListNode*> st;

        //tortoise and hare method
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //to fill the stack
        while (slow != NULL) {
            st.push(slow);
            slow = slow->next;
        }
        //main iterations
        while(!st.empty()){
            ListNode* node = st.top();
            st.pop();
            node->next = ptr->next;
            ptr->next = node;
            ptr = node->next;
        }
        ptr->next = NULL;
    }
};
