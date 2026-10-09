class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy(0); //create a dummy var to make starting list easier
        ListNode* tail = &dummy; //assign the "tail" to the var

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1; //add value to the end of the new list
                tail = tail->next; //move the "tail" to the newly added variable
                list1 = list1->next; //advance to the next node in the list you added from
            }
            else {
                tail->next = list2;
                tail = tail->next;
                list2 = list2->next;
            }
        }
        if (list1 == nullptr) { //if list1 is empty, append the rest of list2 and vice versa
            tail->next = list2;
        }
        else {
            tail->next = list1;
        }
        return dummy.next; //skip the dummy node when returning
    }
};