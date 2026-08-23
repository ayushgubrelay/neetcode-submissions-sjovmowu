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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(curr != nullptr){
            next = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* middle = findMiddle(head);
        ListNode* next = middle->next;
        middle->next = nullptr;
        ListNode* rh = reverse(next);
        ListNode* temp = head;
        while(temp != nullptr && rh != nullptr){
            ListNode* tempNext = temp->next;
            ListNode* rhNext = rh->next;
            temp -> next = rh;
            rh ->next = tempNext;
            temp = tempNext;
            rh = rhNext;
        }
        
    }
};
