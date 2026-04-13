class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;

        ListNode* ptra = NULL;
        ListNode* preptr = NULL;

        if(ptr2->val <= ptr1->val) {
            ptra = ptr2;
            preptr = ptr2;
            ptr2 = ptr2->next;    
        }
        else {
            ptra = ptr1;
            preptr = ptr1; 
            ptr1 = ptr1->next;
        }

        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->val < ptr2->val){
                preptr->next = ptr1;
                preptr = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                preptr->next = ptr2;
                preptr = ptr2;
                ptr2 = ptr2->next;
            }
        }

        // attach remaining
        if(ptr1 != NULL) preptr->next = ptr1;
        if(ptr2 != NULL) preptr->next = ptr2;

        return ptra;
    }
};