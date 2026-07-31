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

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        for(int i = 1; i < left; i++){
            prev = prev -> next;
        }
        ListNode* leftNode = prev->next;
        ListNode* rightNode = leftNode;
        for(int i = left; i < right; i++){
            rightNode = rightNode -> next;
        }

        ListNode* rightNext = rightNode -> next;

        prev -> next = nullptr;
        rightNode -> next = nullptr;

        ListNode* reverseHead = reverse(leftNode);
        prev->next = reverseHead;
        leftNode -> next = rightNext;

        return dummy->next;



    }
};