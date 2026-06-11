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
        // if (head == nullptr || left == right) {
        //     return head;
        // }
        ListNode* lp = nullptr;
        ListNode* temp = head;
        for(int i = 1; i < left; i++){
            lp = temp;
            temp = temp -> next;
        }
        ListNode* prev = nullptr;
        ListNode* start = temp;
        ListNode* curr = temp;
        for(int i = 0; i < right-left+1; i++){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        if(lp != nullptr){
            lp -> next = prev;
        }else{
            head = prev;
        }
         
        start -> next = curr;
        return head;
        
    }
};