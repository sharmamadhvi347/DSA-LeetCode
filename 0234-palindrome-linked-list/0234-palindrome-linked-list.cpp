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
    bool isPalindrome(ListNode* head) {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        stack<int> st;

        if(head== NULL || head->next == NULL)return true;

        while(ptr2 != NULL && ptr2->next !=NULL){
            st.push(ptr1->val);
            ptr1= ptr1->next;
            ptr2 = ptr2->next->next;
        }
        if(ptr2 !=NULL)ptr1 = ptr1->next;

        while(ptr1 != NULL){
            if (st.empty() || ptr1->val != st.top())
                return false;

            st.pop();
            ptr1 = ptr1->next;
        }

        return true;
    }
};