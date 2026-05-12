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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        cout << count << endl;
        if(count == n){
            return head->next;
        }
        int size = count - n;
        int i = 1;
        temp = head;
        while(temp != nullptr && i < size){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};
