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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* lp = nullptr;
        ListNode* temp = head;

        for (int i = 1; i < left; i++) {
            lp = temp;
            temp = temp->next;
        }

        ListNode* start = temp;
        ListNode* prev = nullptr;
        ListNode* curr = temp;

        for (int i = 0; i <= right - left; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        start->next = curr;

        if (lp != nullptr) {
            lp->next = prev;
            return head;
        }

        return prev; // left == 1
    }
};