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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(0);
        int c = 0;
        
        ListNode* newhead = dummy;
        while(temp1 != nullptr || temp2 != nullptr){
            int val1 = 0;
            int val2 = 0;
            if(temp1 != nullptr){
                val1 = temp1 -> val;
            }
            if(temp2 != nullptr){
                val2 = temp2 -> val;
            }
            int sum = val1 + val2 + c;
            int digit = sum % 10;
            c = sum / 10;
            ListNode* newnode = new ListNode(digit);
            newhead -> next = newnode;
            newhead = newhead -> next;
            if(temp1 != nullptr){
                temp1 = temp1->next;
            }

            if(temp2 != nullptr){
                temp2 = temp2->next;
            }

            



        }
        if(c != 0){
            ListNode* newnode2 = new ListNode(c);
            newhead -> next = newnode2;
        }
         

        return dummy->next;
        
        
    }
};
