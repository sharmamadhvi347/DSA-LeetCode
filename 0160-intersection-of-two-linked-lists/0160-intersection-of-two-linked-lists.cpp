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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //store address in the hash table and whenever the count visit of any address becomes 2 return it 
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        unordered_map<ListNode*, bool> visited;

        while(ptr1 != NULL || ptr2 != NULL){
            if(visited[ptr1]==true) return ptr1;
            if(ptr1!=NULL){
                visited[ptr1] = true;
                ptr1 = ptr1->next;
            }

            if(visited[ptr2]==true) return ptr2;
            
            if(ptr2!=NULL){
                visited[ptr2]= true;
                ptr2 = ptr2->next;
            }
        }

        return NULL;
    }
};