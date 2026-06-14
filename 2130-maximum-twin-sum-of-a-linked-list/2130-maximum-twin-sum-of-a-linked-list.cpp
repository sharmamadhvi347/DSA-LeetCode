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
    int pairSum(ListNode* head) {
    ListNode *ptr1 = head;
    ListNode *ptr2 = head;
    ListNode *ptr = head;
    ListNode *preptr = head;

    int sum = 0;
    int maxi = -100000;

    int n = 0;
    int count = 0;

//counting length of LL
    while(ptr != NULL){
        ptr = ptr->next;
        n++;
    }

//going to middle ele
    while(count < n/2){
        preptr = ptr2;
        ptr2 = ptr2->next;
        count++;
    }

    preptr->next = NULL;

//reversing
    while(ptr2 != NULL){
        ListNode* nextptr = ptr2->next;

        ptr2->next = preptr;
        preptr = ptr2;
        ptr2 = nextptr;
    }

//adding and checking twin sum
    for(int i = 0; i < n/2; i++){
        sum = ptr1->val + preptr->val;
        if(sum > maxi)
            maxi = sum;

        ptr1 = ptr1->next;
        preptr = preptr->next;
    }

    return maxi;
}
};

//can be done with stack but SC will increase 


