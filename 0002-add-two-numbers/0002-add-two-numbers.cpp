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

    // ListNode* reverse(ListNode* head) {
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;

    //     while (curr != nullptr) {
    //         ListNode* next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }

    //     return prev;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;  // Freeing the memory allocated for dummyHead
        return result;

// first take the both pointers to the end and then just reverse the list- both lists and then add and save answer into new LL and then just reverse it. 
        // for other but harder ques:
        // ListNode *ptr1 = l1;
        // ListNode *ptr2 = l2;
        // ListNode dummy(0);
        // ListNode* tail = &dummy;
        // int val = 0;
        // int carry = 0;

        // ptr1 = reverse(l1);
        // ptr2 = reverse(l2);

        // while(ptr1!=NULL || ptr2 != NULL){
        //     val = 0;
        //     if(ptr1!=NULL && ptr2 != NULL){
        //         val = ptr1->val + ptr2->val+carry;
        //         carry = 0;
        //         if(val>=10){
        //             carry = 1;
        //             val = val%10;
        //         }
        //         tail->next = new ListNode(val);
        //         tail = tail->next;
        //         ptr1=ptr1->next;
        //         ptr2=ptr2->next;
        //     }else if(ptr1!=NULL){
        //         val = ptr1->val+carry;
        //         carry = 0;
        //         if(val>=10){
        //             carry = 1;
        //             val = val%10;
        //         }
        //         tail->next = new ListNode(val);
        //         tail = tail->next;
        //          ptr1=ptr1->next;
        //     }else if(ptr2!=NULL) {
        //         val = ptr2->val+carry;
        //         carry = 0;
        //         if(val>=10){
        //             carry = 1;
        //             val = val%10;
        //         }
        //         tail->next = new ListNode(val);
        //         tail = tail->next;
        //          ptr2=ptr2->next;
        //     }
        // }

        // if (carry) {
        //         tail->next = new ListNode(carry);
        // }

        // return dummy.next;

    }
};