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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        while (head1 != nullptr && head2 != nullptr) {
            if (head1->val <= head2->val) {
                ListNode* newnode = new ListNode(head1->val);
                temp->next = newnode;
                head1 = head1->next;
                temp = temp->next;
            } else {
                ListNode* newnode = new ListNode(head2->val);
                temp->next = newnode;
                head2 = head2->next;
                temp = temp->next;
            }
        }
        while (head1 != nullptr) {
            ListNode* newnode = new ListNode(head1->val);
            temp->next = newnode;
            head1 = head1->next;
            temp = temp->next;
        }

        while (head2 != nullptr) {
            ListNode* newnode = new ListNode(head2->val);
            temp->next = newnode;
            head2 = head2->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};
