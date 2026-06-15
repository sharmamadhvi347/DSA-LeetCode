class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *ptr1 = head;
        ListNode *ptr2 = head->next;

        head = ptr2;              // new head after first swap
        ListNode *preptr = NULL;  // tail of previous swapped pair

        while (ptr1 != NULL && ptr2 != NULL) {

            ListNode *nextPair = ptr2->next;

            // swap current pair
            ptr1->next = nextPair;
            ptr2->next = ptr1;

            // connect previous pair to current swapped pair
            if (preptr != NULL)
                preptr->next = ptr2;

            // current pair's tail becomes previous tail
            preptr = ptr1;

            // move to next pair
            ptr1 = nextPair;

            if (ptr1 != NULL)
                ptr2 = ptr1->next;
            else
                ptr2 = NULL;
        }

        return head;
    }
};